/*
A pangram is a sentence that contains every single letter of the alphabet at least once. For example, 

the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.

*/

#include <stdbool.h>
#include<string.h>
bool is_pangram(const char *str_in) {
  int j;
  int b[26]={0};
  for(unsigned int i=0;i<strlen(str_in);i++)
  {
        if ('A' <= str_in[i] && str_in[i] <= 'Z')
            j = str_in[i] - 'A';
        else if ('a' <= str_in[i] && str_in[i] <= 'z')
            j = str_in[i] - 'a';
        else
            continue;
    b[j] = 1;
  }
  for(int i=0;i<=25;i++)
    if(b[i]==0)
      return 0;
  return 1;
}
