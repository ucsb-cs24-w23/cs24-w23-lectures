# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
all: test
CXXFLAGS = -g --std=c++11

test: iterators.cpp
	g++  ${CXXFLAGS} iterators.cpp -o test

clean:
	rm test
