/* hello.c */
/* 2023/05/08 clone from GitHub */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// #include <math.h>

void timeDemo()
{
    struct tm* ptr;
    time_t t;
    printf("time(), localtime() return localtime \n");
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
}

int main(int argc, char ** argv)
{
    printf("Hello, macOS C !\n");
    
    printf("argc = %d\n", argc);
	if (argc > 0) {
		printf("argv[0] = %s\n", argv[0]);
		printf("argv[1] = %s\n", argv[1]);
	}

    printf("abs(-35) = %d\n", abs(-35));

    timeDemo();

    return 0;
}

