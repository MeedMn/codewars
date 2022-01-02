/*

A Hamming number is a positive integer of the form 2i3j5k, for some non-negative integers i, j, and k.
(https://en.wikipedia.org/wiki/Regular_number)

Write a function that computes the nth smallest Hamming number.

Specifically:

    The first smallest Hamming number is 1 = 203050
    The second smallest Hamming number is 2 = 213050
    The third smallest Hamming number is 3 = 203150
    The fourth smallest Hamming number is 4 = 223050
    The fifth smallest Hamming number is 5 = 203051

The 20 smallest Hamming numbers are given in example test fixture.

Your code should be able to compute all of the smallest 5,000 (Clojure: 2000, NASM: 13282) Hamming numbers without timing out.

*/

#include <stdint.h>
uint64_t min(uint64_t a,uint64_t b)
{
  if(a<b)
    return a;
  else
    return b;
}
uint64_t hamber(int n)
{
    uint64_t a[n],c1=2,c2=3,c3=5;
    a[0] =1;
    int i,j,k;i=j=k=0;
    for(int o=1;o<n;o++)
    {
      a[o]=min(c1,min(c2,c3));
      if(a[o]==c1) c1 = 2*a[++i];
      if(a[o]==c2) c2 = 3*a[++j];
      if(a[o]==c3) c3 = 5*a[++k];
    }
    return a[n-1];
}
