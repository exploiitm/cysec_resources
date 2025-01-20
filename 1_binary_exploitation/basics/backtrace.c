#include <stdio.h>

int f4() {
    int x;
    scanf("%d", &x);
    return x;
}

int f3() {
    int x;
    scanf("%d", &x);
    int y = f4();
    return x + y;
}

int f2() {
    int x;
    scanf("%d", &x);
    int y = f3();
    return x + y;
}

int f1() {
    int x;
    scanf("%d", &x);
    int y = f2();
    return x + y;
}

int main() {
    int y = f1();
    printf("%d\n", y);
}
