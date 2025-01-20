#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  char *SH = getenv("MYSHELL");
  printf("System address: %p\n", system);
  printf("Exit address: %p\n", exit);
  printf("SHELL address: %p\n", SH);
  // printf("%6s", SH);
  char buf[20];
  read(0, buf, 200);
}
