test: tests_run robtest1
	./tests_run
	./robtest1

clean:
	rm -f *.o tests_run robtest1

tests_run: simplejson_tests.o simplejson.o
	g++ simplejson.o simplejson_tests.o -o tests_run

simplejson_tests.o: simplejson_tests.cc ../simplejson.h
	g++ simplejson_tests.cc -c

simplejson.o: ../simplejson.c ../simplejson.h
	gcc --std=c99 ../simplejson.c -c

robtest1: robtest1.c simplejson.o
	gcc --std=c99 robtest1.c simplejson.o -o robtest1
