all: hello welcome

welcome: libgreeter.a

libgreeter.a: greeter.o
	ar ru $@ $^
	ranlib $@
