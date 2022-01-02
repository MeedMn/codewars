/*
Correctly guess a number chosen at random, between 0xA5A50000 and 0xA5A5FFFF, writing the answer to the memory location provided as an argument.
*/

#include <stdint.h>

void guess(uint32_t *answer)
  {
    unsigned int *P; *answer = 24; P = answer + 1; *answer = *P;
  }
