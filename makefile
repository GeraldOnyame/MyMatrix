FLAGS=-std=c++11 -finstrument-functions

all: main tests

main:
	g++ $(FLAGS) main.cpp mymatrix.cpp -o main

tests:
	g++-5 $(FLAGS) tests.cpp mymatrix.cpp -o tests
clean:
	rm -f main tests
