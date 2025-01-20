#include <stdio.h>
#include <getopt.h>

int funct(void);


int main(void) {
  long long i = funct();
  while (i < 1000000000) i++;
  puts("Whatcha doin'");
  puts("Second invocation!");
}
