#Testing the make file
OBJ = ../obj/
BIN = ../bin/
SRC = ../src/
INCLUDE = -I ../include/
FLAGS = -Wall -c 
THREAD = -lpthread

all:$(BIN)server $(BIN)client

$(BIN)server:$(OBJ)ServerWithSychro.o $(OBJ)commonfunctions.o
	gcc -o $(BIN)server $(OBJ)ServerWithSychro.o $(OBJ)commonfunctions.o $(THREAD)

$(OBJ)commonfunctions.o:$(SRC)commonfunctions.c
	gcc -o $(OBJ)commonfunctions.o $(SRC)commonfunctions.c $(FLAGS) $(INCLUDE) $(THREAD)

$(OBJ)ServerWithSychro.o:$(SRC)ServerWithSychro.c
	gcc -o $(OBJ)ServerWithSychro.o $(SRC)ServerWithSychro.c $(FLAGS) $(INCLUDE) $(THREAD)

$(BIN)client:$(OBJ)ClientWithSychro.o $(OBJ)commonfunctions.o
	gcc -o $(BIN)client $(OBJ)ClientWithSychro.o $(OBJ)commonfunctions.o $(THREAD)

$(OBJ)ClientWithSychro.o : $(SRC)ClientWithSychro.c
	gcc -o $(OBJ)ClientWithSychro.o $(SRC)ClientWithSychro.c $(FLAGS) $(INCLUDE) $(THREAD)

clean:
	rm -f $(OBJ)* $(BIN)*
#-f is for force fully remove the data in obj and bin.

