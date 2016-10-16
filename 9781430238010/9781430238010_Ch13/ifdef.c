#include <stdlib.h>
#include <stdio.h>

#define DEBUG 1
#define max(a, b) (a>b)?a:b


int main(int argc, char **argv)
{
	printf("Hello World\n");

#ifdef DEBUG
	printf("max(5, 8) is %d\n", max(5, 8));
	printf("This is a debug statement\n");
#endif

	return 0;
}
