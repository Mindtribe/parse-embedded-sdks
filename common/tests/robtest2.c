#include <stdio.h>
#include <string.h>
#include "../simplejson.h"

char *data = "{\"data\":{\"alert\":true},\"time\":\"2015-04-07T22:43:00.4Z\"}";
#define vlen 1024
char value[vlen];

int main (int c, char **argv)
{
	char *key;
	const char *x;

	// const char *getPushJson(const char *data, size_t dataSize,
	//                        int *start, int *length);

	int len = strlen(data);
	int start, length;
	
	x = getPushJson (data, len, &start, &length);
	printf ("x=%s start=%d length=%d\n", x, start, length);

	x = getPushJson (data+1, len-1, &start, &length);
	printf ("x=%s start=%d length=%d\n", x, start, length);

	return 0;
}
