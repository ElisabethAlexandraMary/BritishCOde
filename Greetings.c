#include "stdio.h"

void main(int argc, char** argv) {
  if (argc == 1) {
    printf("Greetings, World");
  }
  else {
    printf("Greetings, %s", argv[1]);
  }
}
