
CC=gcc
FLAGS = -Wall -c
OBJ=../obj/
INCLUDE = -I ../include/
SRC=../src/
BIN=../bin/

$(BIN)exec: $(OBJ)main.o $(OBJ)insert.o $(OBJ)display.o $(OBJ)delete.o
	$(CC) -o $(BIN)exec $(OBJ)main.o $(OBJ)insert.o $(OBJ)display.o $(OBJ)delete.o

$(OBJ)main.o:$(SRC)main.c
	$(CC) -o $(OBJ)main.o $(SRC)main.c $(FLAGS) $(INCLUDE)


$(OBJ)insert.o:$(SRC)insert.c
	$(CC) -o $(OBJ)insert.o $(SRC)insert.c $(FLAGS) $(INCLUDE)

$(OBJ)display.o:$(SRC)display.c
	$(CC) -o $(OBJ)display.o $(SRC)display.c $(FLAGS) $(INCLUDE)


$(OBJ)delete.o:$(SRC)delete.c
	$(CC) -o $(OBJ)delete.o $(SRC)delete.c $(FLAGS) $(INCLUDE)
clean:
	rm -f $(OBJ)* $(BIN)*
