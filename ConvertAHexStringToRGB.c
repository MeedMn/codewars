/*

  When working with color values it can sometimes be useful to extract the individual red, green, and blue (RGB) component values for a color.
  Implement a function that meets these requirements:

    Accepts a case-insensitive hexadecimal color string as its parameter (ex. "#FF9933" or "#ff9933")
    Returns a Map<String, int> with the structure {r: 255, g: 153, b: 51} where r, g, and b range from 0 through 255

Note: your implementation does not need to support the shorthand form of hexadecimal notation (ie "#FFF")
Example

"#FF9933" --> {r: 255, g: 153, b: 51}

*/

#include<string.h>
typedef struct {
    int r, g, b;
} rgb;
long long hex_dec(char *a)
{
  long long decimal = 0, base = 1;
  int n=2;
  for(int i = n--; i >= 0; i--)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            decimal += (a[i] - 48) * base;
            base *= 16;
        }
        else if(a[i] >= 'A' && a[i] <= 'F')
        {
            decimal += (a[i] - 55) * base;
            base *= 16;
        }
        else if(a[i] >= 'a' && a[i] <= 'f')
        {
            decimal += (a[i] - 87) * base;
            base *= 16;
        }
    }
  return decimal;
}
rgb hex_str_to_rgb(const char *hex_str) {
  rgb a;
  char cpy[3]="";
  strncpy(cpy, hex_str+1, 2);
  a.r = hex_dec(cpy);
  strncpy(cpy, hex_str+3, 2);
  a.g = hex_dec(cpy);
  strncpy(cpy, hex_str+5, 2);
  a.b = hex_dec(cpy);
  return a;
}
