#include <stdlib.h>

#include "parser.h"
#include "lenv.h"
#include "builtin.h"
#include "lval.h"

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* input) {}
#elif __APPLE__
#include <editline/readline.h>
#elif __linux
#include <editline/readline.h>
#include <editline/history.h>
#endif

void info(void);
void read_eval_print(lenv* e, const char* input);

int main(int argc, char** argv) {
  parser_init();
  lenv* e = lenv_new();
  lenv_add_builtins(e);
  lenv_load_file(e, "src/stdLibrary.evie");

  if (argc == 1) {
    info();
    while (1) {
      char* input = readline("evie> ");
      add_history(input);
      read_eval_print(e, input);
      free(input);
    }
  }

  if (argc >= 2) {
    for (int i = 1; i < argc; i++) {

      lval* args = lval_add(lval_sexpr(), lval_str(argv[i]));
      lval* x = builtin_load(e, args);

      if (x->type == LVAL_ERR) { lval_println(x); }
      lval_del(x);
    }
  }

  lenv_del(e);
  parser_cleanup();

  return 0;
}

void info(void) {
  puts("Evie REPL 1.0");
  puts("Press Ctrl+C to Exit\n");
}

void read_eval_print(lenv* e, const char* input) {
  mpc_result_t r;

  if (parser_parse("<stdin>", input, &r)) {
    lval* x = lval_eval(e, lval_read(r.output)); 
    lval_println(x);
    lval_del(x);
    mpc_ast_delete(r.output);
  } else {
    mpc_err_print(r.error);
    mpc_err_delete(r.error);
  }
}
