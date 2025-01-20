#include <unistd.h>

int main() {
  for (int i = 1; i < 1e9; i++);
  char buf[16];
  read(0, buf, 56);
}
