#include "stdlib.h"
#include "stdio.h"

#define N 4
char* tea_blends[N] = {
    "Earl Grey",
    "Butter",
    "Gunpowder",
    "Cloud"
}

void main() {
  int tea_blend_index = rand() % N;
  printf("Today's Tea is %s\n", tea_blends[tea_blend_index]);
}
