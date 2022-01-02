/*
We all know that any integer number n is divisible by 1 and n. That is why these two numbers are not the actual divisors of any numbers. 

The function SOD(n) (sum of divisors) is defined as the summation of all the actual divisors of an integer number n. For example: SOD(24) = 2+3+4+6+8+12 = 35.

The function CSOD(n) (cumulative SOD) of an integer n, is defined as below:

CSOD(n) = ∑(i=1 -> n) SOD(i)
 
Given the value of n, your job is to find the value of CSOD(n).
Random Test

    Number of Test Cases: 2000

    Range: 0 to 100000000


*/

typedef unsigned long long int ull;
#include<stdio.h>
#include<math.h>
ull new_function(const ull n) {
  ull i,j;
  ull s=0;
  for(i=2;pow(i,2)<=n;i++)
  {
    j = n/i;
    s += ((i + j) * (j - i + 1) / 2) + i * (j - i);
  }
  return s;
}



