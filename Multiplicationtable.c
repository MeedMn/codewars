/*
Your task, is to create NxN multiplication table, of size provided in parameter.

for example, when given size is 3:

1 2 3
2 4 6
3 6 9

for given example, the return value should be: [[1,2,3],[2,4,6],[3,6,9]]

*/

#include <stdlib.h>
int **multiplication_table(int n) {
  int i,j,c=1,s=1;
  int **T;
  T =(int **)malloc(n*sizeof(int*));
  for(i=0;i<n;i++)
  {
    T[i] = (int *)malloc(n*sizeof(int));
    for(j=0;j<n;j++)
     {
      if(i == 0){T[i][j] = c;c++;}
      else {T[i][j] = c*s;c++;} 
     }c=1;s++;
  }
  return T;
  free(T);
}
