/*
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. 
ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string,
they should be returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".

*/

#include <stddef.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char *rot13(const char *src)
{
  int i,s=0,*a=NULL;
  char *T=NULL,*R=NULL;
  s = strlen(src);
  T = (char *)malloc(s*sizeof(char));
  a = (int *)malloc(s*sizeof(int));
  for(i=0;i<s;i++)
  {
    if(tolower(src[i])>='a' && tolower(src[i])<='m')
      {a[i]=src[i];
       a[i] += 13;
       T[i] = a[i];}
    else if(tolower(src[i])>='n' && tolower(src[i])<='z')
    {a[i] = src[i];
     a[i] -= 13;
     T[i] = a[i];}
    else{T[i] = src[i];}}
  R = (char *)malloc(s*sizeof(char));
   for(i=0;i<s;i++)
     R[i] = T[i];
   if(strlen(T) == strlen(src)) return T;
   else if(strlen(R) == strlen(src)) return R;
}
