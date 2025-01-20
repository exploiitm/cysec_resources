#include <stdio.h>

int main() {
    char buf[48];
    printf("%p", buf);
    scanf("%s", buf);
    printf("%s\n", buf);
}
