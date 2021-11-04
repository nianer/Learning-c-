main: main.o classtest.o network.o
	g++ -o main main.o classtest.o network.o
main.o: main.cpp classtest.h network.h
	g++ -c main.cpp
classtest.o: classtest.cpp classtest.h
	g++ -c classtest.cpp
network.o: network.cpp network.h
	g++ -c network.cpp

clean:
	rm -f *.o main 