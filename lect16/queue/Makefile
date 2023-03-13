# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
all: queue bfs

queue: queue.cpp
	g++ -g --std=c++11 queue.cpp -o queue

bfs: bfs.cpp bst.cpp
	g++ -g --std=c++11 bst.cpp bfs.cpp -o bfs

clean:
	rm queue bfs
