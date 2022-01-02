/*
  
  Complete the function that determines the score of a hand in the card game Blackjack (aka 21).

The function receives an array of strings that represent each card in the hand ("2", "3", ..., "10", "J", "Q", "K" or "A") and should return the score of the hand (integer).
Scoring rules:

Number cards count as their face value (2 through 10). Jack, Queen and King count as 10. An Ace can be counted as either 1 or 11.

Return the highest score of the cards that is less than or equal to 21. If there is no score less than or equal to 21 return the smallest score more than 21.
Examples

["A"]                           ==>  11
["A", "J"]                      ==>  21
["A", "10", "A"]                ==>  12
["5", "3", "7"]                 ==>  15
["5", "4", "3", "2", "A", "K"]  ==>  25
  
*/

#include <stddef.h>

int score_hand(size_t n, const char cards[n]) {
  int s=0,a=0;
  for(size_t i=0;i<n;i++){
    switch(cards[i]){
        case '2':{s+=2;break;}
        case '3':{s+=3;break;}
        case '4':{s+=4;break;}
        case '5':{s+=5;break;}
        case '6':{s+=6;break;}
        case '7':{s+=7;break;}
        case '8':{s+=8;break;}
        case '9':{s+=9;break;}
        case 'A':{s+=11;a++;break;}
        default :{s+=10;break;}
      }}
  for(int i=0;i<a;i++)
    if(s>21)
      s-=10;
  return s;
}
