#include <stdio.h>

int main(){
    char format[16] = "----%d-%d-%d---";
    char buffer[8];
  //printf("%p\n", buffer);
    scanf("%s", buffer);
    printf(format, 16, 02, 2024);
    scanf("%s", buffer); 
}
