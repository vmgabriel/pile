PROGRAM = Prog
INSTALL = opt/$(PROGRAM)
CARP = src

GUI =
LIB =
SQL =

SRC = $(CARP)/main.cpp

PKGS = $(CARP)/Pila.h

ESPECIAL =

VALACOPTS =

BUILT_ROOT = 1

all:
	g++ -Wall -o $(PROGRAM) $(PKGS) $(SRC)

clean:
	@rm -v -fr *~ *.c *.h *.o $(PROGRAM)
