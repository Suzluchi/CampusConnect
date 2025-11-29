CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./core -I./services -I./io -I./app -I./utils
SRC = $(wildcard core/*.cpp) $(wildcard services/*.cpp) $(wildcard io/*.cpp) $(wildcard app/*.cpp) $(wildcard utils/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = CampusConnect

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean