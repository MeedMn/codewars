/*
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false


*/
//avec c

#include <stdbool.h>
#include<string.h>
#include<ctype.h>

bool xo (const char* str)
{
  int i,x=0,o=0,l;
  l = strlen(str);
  for(i=0;i<l;i++)
    {
     if(toupper(str[i]) == 'X')x++;
     else if(toupper(str[i]) == 'O')o++;
    }
    if(x == o) return true;
    else return false;
}
