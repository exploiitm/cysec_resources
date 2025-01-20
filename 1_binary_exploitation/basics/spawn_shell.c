#include <unistd.h>

int main() { execv("/bin/bash", NULL); }
