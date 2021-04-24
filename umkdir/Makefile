MKDIR_P = mkdir -p

SRC_DIR := ./src
OBJ_DIR := ./obj

HEADERDIR := ./include
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
LDFLAGS := -g -lstdc++fs
CPPFLAGS := -std=c++2a
CXXFLAGS := -g

EXECUTABLENAME := umkdir

$(EXECUTABLENAME): $(OBJ_FILES)
	echo "$(EXECUTABLENAME) OBJ_FILES:" $(OBJ_FILES)
	g++ $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CPPFLAGS) $(CXXFLAGS) -I$(HEADERDIR) -I$(dir $<) -c -o $@ $<