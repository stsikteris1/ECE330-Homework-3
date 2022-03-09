all: main.o heartRates.o
	g++ main.o heartRates.o -o HW3
main.o: main.cpp heartRates.h
	g++ -c main.cpp
heartRates.o: heartRates.cpp heartRates.h
	g++ -c heartRates.cpp
clean: 
	rm *.o
	rm HW3
