
INCLUDES = -I/usr/local/include -I ../inc
DEFINES = -DNDEBUG
CFLAGS =  -c -O2 -std=c++ 
LDFLAGS =  -L/usr/local/lib 
LIBS =  -lname 


example : c1.o c2.o c3.o
	g++ -o example $(LDFLAGS) $(LIBS)   c1.o c2.o c3.o

c1.o : c1.cpp common.h 
	gcc $(CFLAGS) $(INCLUDES) $(DEFINES) c1.cpp

c2.o : c2.cpp common.h 
        gcc $(CFLAGS) $(INCLUDES) $(DEFINES) c2.cpp

c3.o : c3.cpp common.h 
        gcc $(CFLAGS) $(INCLUDES) $(DEFINES) c3.cpp

clean: 
	rm -f *.o example
