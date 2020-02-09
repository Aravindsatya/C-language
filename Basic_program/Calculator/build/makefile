#creating Macros 

BIN = ../bin/
OBJ = ../obj/
INCLUDE = -I ../include/
SRC = ../src/
FLAGS = -Wall -c

$(BIN)calculator : $(OBJ)main.o $(OBJ)functions.o
	gcc -o $(BIN)calculator $(OBJ)main.o $(OBJ)functions.o

$(OBJ)main.o : $(SRC)main.c
	gcc -o $(OBJ)main.o $(SRC)main.c $(FLAGS) $(INCLUDE)

$(OBJ)functions.o : $(SRC)functions.c
	gcc -o $(OBJ)functions.o $(SRC)functions.c $(FLAGS) $(INCLUDE)

clean:
	rm -f $(OBJ)* $(BIN)*

