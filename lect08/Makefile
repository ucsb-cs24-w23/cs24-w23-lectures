#Makefile
CXXFLAGS = -std=c++11 -g -Wall -O0
all: test_bst
	./test_bst
test_bst: bst.cpp test_bst.cpp
	g++ $(CXXFLAGS) bst.cpp test_bst.cpp -o test_bst
clean:
	rm test_bst
