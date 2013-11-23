main: main.o Util.o Taat.o
	g++ -o main main.o Util.o Taat.o

main.o: main.cpp
	g++ -c main.cpp

Util.o: Util.cpp
	g++ -c Util.cpp

Taat.o: Taat.cpp
	g++ -c Taat.cpp

.PHONY: clean
clean:
	rm main *.o
