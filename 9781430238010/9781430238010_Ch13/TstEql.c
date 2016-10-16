#include <stdio.h>

int main(int argc, char **argv)
{
	char myArray[] = {'a','b','c','d'};
	int pos = -1;
	char c = 'c';
	int j, length = 4;

	for (j = 0; j < length; j++) {
		if (c = myArray[j]) {
			pos = j;
			break;
		}
	}
	printf("%d\n",pos);
}

