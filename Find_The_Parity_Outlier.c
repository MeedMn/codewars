/*
You are given an array (which will have a length of at least 3, but could be very large) containing integers. 

The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. 

Write a method that takes the array as an argument and returns this "outlier" N.

Examples : 

[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)
[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)
*/

#include <stdlib.h>

int find_outlier(const int *values, size_t count);
int find_outlier(const int *values, size_t count)
{
  int *odd,*even,i,n,sod=0,sev=0,j=0,k=0;
  n = count;
    for(i=0;i<n;i++)
    {
      if(values[i]%2==0){sev++;}else{sod++;}
    }
  odd = (int*)malloc(sod*sizeof(int));even = (int*)malloc(sev*sizeof(int));
  for(i=0;i<n;i++)
    {
      if(values[i] % 2 == 0){even[j] = values[i];j++;}else{odd[k] = values[i];k++;}
    }
    if(sev>sod){return odd[0];}else{return even[0];}
  free(odd);free(even);
}
