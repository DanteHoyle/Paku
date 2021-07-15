# Compiler
CXX := g++

# Directories
SRC_DIR := src
OBJ_DIR := build
BIN_DIR := bin

# Flags
CXXFLAGS := -Iinclude				# Preprocessor flag
CPPFLAGS 	 := -Wall					# Extra Warnings
LDFLAGS  := -Llib
LDLIBS   := -lsfml-graphics -lsfml-window -lsfml-system

# Program Name
EXE := $(BIN_DIR)/Paku.exe

# Files
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

RM := del

.PHONY: all clean

all: clean $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

clean:
	$(RM) $(BIN_DIR)\*.exe
	$(RM) $(OBJ_DIR)\*.o