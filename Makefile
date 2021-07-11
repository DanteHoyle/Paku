# Compiler Options
PROG_NAME = hello_world
CC = g++
LD = g++
CFLAG = -Wall

# Folder Locations
BIN = ./bin
BUILD = ./build
SRC = ./src
INCLUDE = ./include
LIBARAY = ./lib
SFML_LINK = -l sfml-graphics -l sfml-window -l sfml-system

# Generated Lists
SRC_LIST = $(wildcard $(SRC)/*.cpp)
OBJ_LIST = $(BUILD)/$(notdir $(SRC:.cpp=.o))

all: $(PROG_NAME)

compile:
	$(CC) -c $(CFLAG) -I $(INCLUDE) $(SRC_LIST) -o $(OBJ_LIST) 

$(PROG_NAME): compile
	$(LD) $(OBJ_LIST) -o $(BIN)/$@ -L $(LIBARAY) $(SFML_LINK)

.PHONY: clean
clean:
#	if running windows
	ifeq ($(OS),Windows_NT)
		del $(OBJ_LIST) bin/$(PROG_NAME).exe
#	if running linux
	else
		rm $(OBJ_LIST) bin/$(PROG_NAME).exe
	endif

# Old Implimentation
# all: compile link

# compile:
# 	g++ -I src/include -c main.cpp

# link:
# 	g++ main.o -o main -L src/lib -l sfml-graphics -l sfml-window -l sfml-system 