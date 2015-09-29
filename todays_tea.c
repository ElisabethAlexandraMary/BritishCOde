#include "stdlib.h"
#include "stdio.h"

#define N 4
char* tea_varieties[N] = {
    "Earl Grey",
    "Butter",
    "Gunpowder",
    "Cloud"
}

void main() {
  int tea_variety_index = rand() % N;
  printf("Today's Tea is %s\n", tea_varieties[tea_variety_index]);
}
