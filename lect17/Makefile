# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
all: arpa
CXXFLAGS = -g --std=c++11

arpa: arpanet.cpp
	g++  ${CXXFLAGS} arpanet.cpp -o arpa

clean:
	rm arpa
