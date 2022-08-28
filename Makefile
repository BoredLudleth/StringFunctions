main.o: main.cpp
	g++ -c .\main.cpp -o main.o

StringFunc.o: StringFunc.cpp
	g++ -c .\StringFunc.cpp  -o StringFunc.o

TestFunc.o: TestFunc.cpp
	g++ -c .\TestFunc.cpp  -o TestFunc.o

test: main.o StringFunc.o TestFunc.o
	g++ .\main.o .\StringFunc.o .\TestFunc.o -o test

run_test: test
	.\test
