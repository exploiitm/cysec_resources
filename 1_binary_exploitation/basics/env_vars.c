#include <stdio.h>

int main(int argc, char **argv, char **env) {
    printf("\n\n\n------Beginning CLI Arguments-----\n");
    for (int i = 0; i < argc; i++) {
        puts(argv[i]);
    }
    printf("\n\n------Beginning ENV VARS------\n");

    for (int i = 0; env[i] != NULL; i++) {
        printf("%d'th environment variable is %s\n", i, env[i]);
    }
}
