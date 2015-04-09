#include <stdio.h>
#include "../simplerecursivejson.h"

char *data = "{\"data\":{\"alert\":true},\"time\":\"2015-04-07T22:43:00.4Z\"}";
#define vlen 1024
char value[vlen];

int main (int c, char **argv)
{
	char *key;
	int x;

	key = "alert";
	x=simpleJsonProcessor(data, key, value, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, data, key, value);

	key = "time";
	x=simpleJsonProcessor(data, key, value, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, data, key, value);
	
	key = "bloop";
	x=simpleJsonProcessor(data, key, value, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, data, key, value);
	
	key = "true";
	x=simpleJsonProcessor(data, key, value, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, data, key, value);
	
	key = "data";
	x=simpleJsonProcessor(data, key, value, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, data, key, value);
	
	char value2[vlen];
	key = "alert";
	x=simpleJsonProcessor(value, key, value2, vlen);
	printf ("x=%d data=%s key=%s value=%s\n", x, value, key, value2);
	
	return 0;
}
