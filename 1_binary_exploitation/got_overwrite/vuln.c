#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int a = 0x30;
int b = 0x50;

void win(){
    printf("Haccer ftw !!!");
}
int main(){
    puts("Can you win this test?");
    printf("Answer to the first question is at %p, Second is at %p\n", &a, &b);
   
    printf("If you cant, get out");
    char buf[100];
    read(0, buf, 100);
    printf(buf);

    if ( a == 0x69 && b == 0x420){
        puts("You got them corrent");
        puts("But No :)");
        exit(0);
    }
    return 0;
}
