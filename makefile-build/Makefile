all: hello welcome

hello: hello.o
	${CXX} -o $@ $? -lstdc++fs

welcome: welcome.o libgreeter.a
	${CXX} -o $@ $? -lstdc++fs

libgreeter.a: greeter.o
	ar ru $@ $^
	ranlib $@

clean:
	rm -f *.o *.a welcome hello
