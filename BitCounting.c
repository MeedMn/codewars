/*
Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. 
You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
*/

#include <stddef.h>

size_t countBits(unsigned value);

size_t countBits(unsigned value)
{

  int i,n[30],s=0,c=0;
  
  for(i=0;value>0;i++)
  {
    n[i]=value%2;
    value = value/2;
    s++;
  }
  
  for(i=0;i<s;i++)
  {
    if(n[i] == 1) 
    c++;
  }
  return c;
}
