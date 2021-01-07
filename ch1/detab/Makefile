# Variables
CC=gcc
LINK=gcc
CFLAGS=-c -g -Wall
LINKFLAGS=-L. -g 

# Productions
.SUFFIXES: .o .c

.c.o:
	$(CC) $(CFLAGS) -o $@ $<

detab: detab.o
	$(LINK) $(LINKFLAGS) detab.o $(LINKLIBS) -o $@

clean : 
	rm -f detab.o detab