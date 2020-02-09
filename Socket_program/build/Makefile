#Testing the make file
OBJ = ../obj/
BIN = ../bin/
SRC = ../src/
INCLUDE = -I ../include/
FLAGS = -Wall -c

all:$(BIN)server $(BIN)client

$(BIN)server:$(OBJ)server.o $(OBJ)server_functions.o
	gcc -o $(BIN)server $(OBJ)server.o $(OBJ)server_functions.o

$(OBJ)server_functions.o : $(SRC)server_functions.c
	gcc -o $(OBJ)server_functions.o $(SRC)server_functions.c $(FLAGS) $(INCLUDE)

$(OBJ)server.o : $(SRC)server.c
	gcc -o $(OBJ)server.o $(SRC)server.c $(FLAGS) $(INCLUDE)

$(BIN)client:$(OBJ)client.o $(OBJ)client_functions.o
	gcc -o $(BIN)client $(OBJ)client.o $(OBJ)client_functions.o

$(OBJ)client.o : $(SRC)client.c
	gcc -o $(OBJ)client.o $(SRC)client.c $(FLAGS) $(INCLUDE)

$(OBJ)client_functions.o : $(SRC)client_functions.c
	gcc -o $(OBJ)client_functions.o $(SRC)client_functions.c $(FLAGS) $(INCLUDE)

clean:
	rm -f $(OBJ)* $(BIN)*

#-f is for force fully remove the data in obj and bin.
