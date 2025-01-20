#include <stdio.h>

int main(){
    int is_it_exploitable = 'b';  
    char buf[48];
    printf("Enter your name: ");
    scanf("%s", buf);
    printf("Hi %s!\n", buf);
    if (is_it_exploitable != 'b') {
        puts("\n--------------------------");
        puts("         I'm in");
        puts("--------------------------");
    }
}
