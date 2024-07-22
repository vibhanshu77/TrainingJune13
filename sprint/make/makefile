CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = ../src
OBJ = ../object
BIN = ../bin
INC = ../include

all: $(BIN)/server $(BIN)/client

$(BIN)/server: $(OBJ)/server.o $(OBJ)/searchInFile.o $(OBJ)/searchForFile.o $(OBJ)/searchForString.o $(OBJ)/displayFileContents.o $(OBJ)/searchInDirectory.o $(OBJ)/logs.o
	$(CC) $(CFLAGS) -o server server.o searchInFile.o searchForFile.o searchForString.o displayFileContents.o searchInDirectory.o logs.o

$(BIN)/client: $(OBJ)/client.o
	$(CC) $(CFLAGS) -o client $(OBJ)/client.o

$(OBJ)/server.o: $(SRC)/server.c $(INC)/server_functions.h $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/server.c -o $(OBJ)/server.o

$(OBJ)/searchInFile.o: $(SRC)/searchInFile.c $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/searchInFile.c -o $(OBJ)/searchInFile.o

$(OBJ)/searchForFile.o: $(SRC)/searchForFile.c $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/searchForFile.c -o $(OBJ)/searchForFile.o

$(OBJ)/searchForString.o: $(SRC)/searchForString.c $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/searchForString.c -o $(OBJ)/searchForString.o

$(OBJ)/displayFileContents.o: $(SRC)/displayFileContents.c $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/displayFileContents.c -o $(OBJ)/displayFileContents.o

$(OBJ)/searchInDirectory.o: $(SRC)/searchInDirectory.c $(INC)/loggers.h
	$(CC) $(CFLAGS) -c $(SRC)/searchInDirectory.c -o $(OBJ)/searchInDirectory.o

$(OBJ)/logs.o: $(SRC)/logs.c
	$(CC) $(CFLAGS) -c $(SRC)/logs.c -o $(OBJ)/logs.o

$(OBJ)/client.o: $(SRC)/client.c
	$(CC) $(CFLAGS) -c $(SRC)/client.c -o $(OBJ)/client.o

#clean:
	#rm -f $(BIN)/server $(BIN)/client *.o

