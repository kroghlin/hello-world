#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void *threadPrintMsg(void *arg)
{
    char *s = (char *) arg;

    printf("%s", s);

    return  (void *) strlen(s);
}

int main (int argc, char **argv)
{
    pthread_t t1;
    void *res;
    int s;

    s = pthread_create(&t1, NULL, threadPrintMsg, "Hello, macOS clang C thread \n");
    if (s != 0) {
        fprintf(stderr, "error\n");
        exit(EXIT_FAILURE);
    }

    printf("Message from main()\n");
    s = pthread_join(t1, &res);
    if (s != 0) {
        fprintf(stderr, "error\n");
        exit(EXIT_FAILURE);
    }

    printf("thread returned $ld\n", (long) res);

    exit(EXIT_SUCCESS);
}

