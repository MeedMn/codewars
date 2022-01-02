/*
#Find the missing letter

Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

You will always get an valid array. And it will be always exactly one letter be missing. The length of the array will always be at least 2.
The array will always contain letters in only one case.

Example:

['a','b','c','d','f'] -> 'e' ['O','Q','R','S'] -> 'P'

["a","b","c","d","f"] -> "e"
["O","Q","R","S"] -> "P"

(Use the English alphabet with 26 letters!)

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata!

*/

char findMissingLetter(char array[])
{
  int i,s;
  char c = '\0';
  s = array[0];
    if(s >=97 && s<=122)
      {
       for(i = 0;;i++)
         {if(s != array[i]){c = s;break;}s++;}
      }
     else if(s>=65 && s<=90)
      {
        for(i=0;;i++)
          {if(s !=array[i]){c=s;break;}s++;}
      }
  return c;
}
