#include <stdio.h>
#include <unistd.h>

void spawn_shell() {
    printf("Damn! You reached me, here u go.\n");
    execv("/bin/bash", NULL);
}

int main() {
    char buff[5];
    printf("What you seek is at %p\n", &spawn_shell);
    printf("Enter your name: ");
    scanf("%s", buff);
    printf("Hello %s. No shell currently , comeback another time\n", buff);
}
