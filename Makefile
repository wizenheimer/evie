src = $(wildcard src/*.c)
obj = $(src:.c=.o)

LDFLAGS = -ledit -lm

evie: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) evie
