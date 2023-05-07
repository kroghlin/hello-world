/* hello.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char [] argv)
{
    printf("Hello, C !\n");
	printf("argc = %d\n");
	if (argc > 0) {
		printf("argv[0] = %s\n", argv[0]);
		printf("argv[1] = %s\n", argv[1]);
	}
    return 0;
}

