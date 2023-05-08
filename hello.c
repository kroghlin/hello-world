/* hello.c */
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
	for (int j=1; j < argc; j++)
	    printf("argv[%d] = %s\n", argv[j]);					
    }

    printf("abs(-35 - 7) = %d\n", abs(-35 - 7));

    timeDemo();

    return 0;
}

