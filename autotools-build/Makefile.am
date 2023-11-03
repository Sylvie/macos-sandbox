bin_PROGRAMS = hello welcome

hello_SOURCES = ../src/hello.cpp

hello_LDADD = -lstdc++fs

welcome_SOURCES = ../src/welcome.cpp

welcome_LDADD = libgreeter.a -lstdc++fs

noinst_LIBRARIES = libgreeter.a

libgreeter_a_SOURCES = ../src/greeter.cpp
