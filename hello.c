/* hello.c */
/* 2023/05/08 clone from GitHub */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>

int main(int argc, char ** argv)
{
    printf("Hello, C !\n");
	printf("argc = %d\n");
	if (argc > 0) {
		printf("argv[0] = %s\n", argv[0]);
		printf("argv[1] = %s\n", argv[1]);
	}
    printf("abs(-35) = %d\n", abs(-35));

    return 0;
}

