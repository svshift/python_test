#!/bin/sh

INCLUDES="-I/usr/local/include -I ../inc"
DEFINES="-DNDEBUG"
CFLAGS=" -c -O2 -std=c++ "
LDFLAGS=" -L/usr/local/lib "
LIBS=" -lname "

gcc $CFLAGS $INCLUDES $DEFINES c1.cpp
gcc $CFLAGS $INCLUDES $DEFINES c2.cpp
gcc $CFLAGS $INCLUDES $DEFINES c2.cpp

g++ -o example $LDFLAGS $LIBS   c1.o c2.o c3.o

