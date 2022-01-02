/*
Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid,
and false if it's invalid.
Examples

"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true

Constraints

0 <= input.length <= 100

Along with opening (() and closing ()) parenthesis, input may contain any valid ASCII characters. Furthermore,
the input string may be empty and/or not contain any parentheses at all. Do not treat other forms of brackets as parentheses (e.g. [], {}, <>).

*/

#include <stdbool.h>

bool validParentheses(const char *str_in) {
  int i,b=-1;
  char a[20];
  for(i=0;str_in[i]!='\0';i++)
  {
    if(str_in[i] =='('){
      a[b] = str_in[i];
      b++;
    }
    else if(str_in[i] ==')')
    {
      if (b == -1){
        return false;
      }  
      else 
        b--;
    }
   }
  if (b == -1)
    return true;
  else
    return false;
}
