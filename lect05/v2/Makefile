# Makefile
# -g includes debugging info
all: complex
	./complex
	
complex: complex.cpp complex.h
	g++ -std=c++11 -O0 -g complex.cpp -o complex

clean:
	rm complex