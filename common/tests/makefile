OBJS = tests_run robtest1 robtest2 robtest1-recursive

test: $(OBJS)
	./tests_run
	./robtest1
	./robtest2
	./robtest1-recursive

clean:
	rm -f *.o $(OBJS) *~

tests_run: simplejson_tests.o simplejson.o
	g++ simplejson.o simplejson_tests.o -o tests_run

simplejson_tests.o: simplejson_tests.cc ../simplejson.h
	g++ simplejson_tests.cc -c

simplejson.o: ../simplejson.c ../simplejson.h
	gcc --std=c99 ../simplejson.c -c

robtest1: robtest1.c simplejson.o
	gcc --std=c99 robtest1.c simplejson.o -o robtest1

robtest2: robtest2.c simplejson.o
	gcc --std=c99 robtest2.c simplejson.o -o robtest2

simplerecursivejson.o: ../simplerecursivejson.c ../simplerecursivejson.h
	gcc --std=c99 ../simplerecursivejson.c -c


robtest1-recursive: robtest1-recursive.c simplerecursivejson.o
	gcc --std=c99 robtest1-recursive.c simplerecursivejson.o \
	    -o robtest1-recursive
