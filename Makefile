all: main

main: main.o bond.o paper.o stock.o wallet.o
	 g++ -o $@ $^

main.o: main.cpp
	 g++ -c main.cpp

bond.o: bond.h bond.cpp
	g++ -c bond.cpp
     
paper.o: paper.h paper.cpp
	g++ -c paper.cpp

wallet.o: wallet.h wallet.cpp
	g++ -c wallet.cpp

stock.o: stock.h stock.cpp
	g++ -c stock.cpp

clean:
	 rm main.o bond.o paper.o stock.o wallet.o main