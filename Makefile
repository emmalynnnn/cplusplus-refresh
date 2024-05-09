# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = myprogram

# Source files
SRCS = main.cpp Node.cpp LinkedList.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Linking rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
