#include "parser.h"

#include "mpc.h"

void parser_init(void) {
  g = malloc(sizeof(parser_grammar));
  g->number = mpc_new("number");
  g->symbol = mpc_new("symbol");
  g->string = mpc_new("string");
  g->comment = mpc_new("comment");
  g->sexpr = mpc_new("sexpr");
  g->qexpr = mpc_new("qexpr");
  g->expr = mpc_new("expr");
  g->evie = mpc_new("evie");
  mpca_lang(MPCA_LANG_DEFAULT, LANG, g->number, g->symbol, g->string,
            g->comment, g->sexpr, g->qexpr, g->expr, g->evie);
}

int parser_parse(const char* filename, const char* string,
                 mpc_result_t* r) {
  return mpc_parse(filename, string, g->evie, r);
}

int parser_parse_contents(const char* filename, mpc_result_t* r) {
  return mpc_parse_contents(filename, g->evie, r);
}

void parser_cleanup(void) {
  mpc_cleanup(8, g->number, g->symbol, g->string, g->comment,
              g->sexpr, g->qexpr, g->expr, g->evie);
  free(g);
}
