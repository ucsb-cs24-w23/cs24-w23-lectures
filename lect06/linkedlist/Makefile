# Makefile
# -g includes debugging info
all: linkedlist
	valgrind --leak-check=full ./linkedlist
	
linkedlist: linkedlist.cpp linkedlist.h test_linkedlist.cpp
	g++ -std=c++11 -O0 -g linkedlist.cpp test_linkedlist.cpp -o linkedlist

clean:
	rm linkedlist
