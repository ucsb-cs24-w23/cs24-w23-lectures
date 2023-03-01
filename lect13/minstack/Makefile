#Makefile
CXXFLAGS = -std=c++11 -g -Wall -O0
all: test
	./test
	
test:test_stack.cpp mystack.cpp
	g++ $(CXXFLAGS) test_stack.cpp mystack.cpp -o test
clean:
	rm test
