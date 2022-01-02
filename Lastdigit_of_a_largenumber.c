/*
Define a function that takes in two non-negative integers aaa and bbb and returns the last decimal digit of aba^bab. Note that aaa and bbb may be very large!

For example, the last decimal digit of 979^797 is 999, since 97=47829699^7 = 478296997=4782969. The last decimal digit of (2200)2300({2^{200}})^{2^{300}}(2200)2300, which has over 109210^{92}1092 decimal digits, is 666. Also, please take 000^000 to be 111.

You may assume that the input will always be valid.
Examples

lastDigit 4 1             `shouldBe` 4
lastDigit 4 2             `shouldBe` 6
lastDigit 9 7             `shouldBe` 9
lastDigit 10 (10^10)      `shouldBe` 0
lastDigit (2^200) (2^300) `shouldBe` 6

Remarks
JavaScript, C++, R, PureScript

Since these languages don't have native arbitrarily large integers, your arguments are going to be strings representing non-negative integers instead.

*/

#include<string.h>
#include<math.h>
int calcModulus(const char *b, int a)
{int mod = 0; for (int i = 0; i < strlen(b); i++) mod = (mod * 10 + b[i] - '0') % a; return mod;}
int last_digit(const char *a, const char *b)
{
  if(strlen(b) == 1 && b[0] == '0') return 1;
  if (strlen(a) == 1 && a[0] == '0') return 0;
  int re = pow(a[strlen(a) - 1] - '0', (calcModulus(b, 4) == 0) ? 4 : calcModulus(b, 4));
  return re % 10;
}
