#!/bin/bash

g++ -c greeter.cpp
ar rcs libgreeter.a greeter.o
g++ -c welcome.cpp
g++ welcome.o -lgreeter -L.