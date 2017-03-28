CFLAGS=-g -Wall
CC=gcc
AR=ar
RANLIB=ranlib
LIBS=-lsqlite3 -L./ -lcgic

all: libcgic.a my.cgi capture

install: libcgic.a
	cp libcgic.a /usr/local/lib
	cp cgic.h /usr/local/include
	@echo libcgic.a is in /usr/local/lib. cgic.h is in /usr/local/include.

libcgic.a: cgic.o cgic.h
	rm -f libcgic.a
	$(AR) rc libcgic.a cgic.o


#mingw32 and cygwin users: replace .cgi with .exe

my.cgi: my.o libcgic.a
	gcc my.o -o my.cgi ${LIBS}

capture: capture.o libcgic.a
	gcc capture.o -o capture ${LIBS}

clean:
	rm -f *.o *.a my.cgi capture cgicunittest

test:
	gcc -D UNIT_TEST=1 cgic.c -o cgicunittest
	./cgicunittest
