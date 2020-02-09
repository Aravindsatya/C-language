#Testing the make file
OBJ = ../obj/
BIN = ../bin/
SRC = ../src/
INCLUDE = -I ../include/
FLAGS = -Wall -c 
THREAD = -lpthread

all:$(BIN)server $(BIN)client

$(BIN)server:$(OBJ)ServerWithSychro.o $(OBJ)serverFunctions.o
	gcc -o $(BIN)server $(OBJ)ServerWithSychro.o $(OBJ)serverFunctions.o $(THREAD)

$(OBJ)serverFunctions.o:$(SRC)serverFunctions.c
	gcc -o $(OBJ)serverFunctions.o $(SRC)serverFunctions.c $(FLAGS) $(INCLUDE) $(THREAD)

$(OBJ)ServerWithSychro.o:$(SRC)ServerWithSychro.c
	gcc -o $(OBJ)ServerWithSychro.o $(SRC)ServerWithSychro.c $(FLAGS) $(INCLUDE) $(THREAD)


$(BIN)client:$(OBJ)ClientWithSychro.o $(OBJ)clientFunctions.o
	gcc -o $(BIN)client $(OBJ)ClientWithSychro.o $(OBJ)clientFunctions.o $(THREAD)

$(OBJ)ClientWithSychro.o : $(SRC)ClientWithSychro.c
	gcc -o $(OBJ)ClientWithSychro.o $(SRC)ClientWithSychro.c $(FLAGS) $(INCLUDE) $(THREAD)

$(OBJ)clientFunctions.o : $(SRC)clientFunctions.c
	gcc -o $(OBJ)clientFunctions.o $(SRC)clientFunctions.c $(FLAGS) $(INCLUDE) $(THREAD)

clean:
	rm -f $(OBJ)* $(BIN)*
#-f is for force fully remove the data in obj and bin.

