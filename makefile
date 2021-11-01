test: test.o classtest.o
	g++ -o test test.o classtest.o
test.o: test.cpp classtest.h
	g++ -c test.cpp
classtest.o: classtest.cpp classtest.h
	g++ -c classtest.cpp

clean:
	rm -f *.o test 