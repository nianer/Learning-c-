main: main.o classtest.o
	g++ -o main main.o classtest.o
main.o: main.cpp classtest.h
	g++ -c main.cpp
classtest.o: classtest.cpp classtest.h
	g++ -c classtest.cpp

clean:
	rm -f *.o main 