#include <stdio.h>
#include "printByte.h"

int main(void)
{
  int i = 0;
  char c;
  int sign = 1;
  while((c = getchar()) != EOF) {
    if (c == '\n') {break;}
    if (c == '-') {
      sign = -1;
      continue;
    }
    i *= 10;
    i += (c - '0');
  }
  i *= sign;
  charByte(i);
  shortByte(i);
  intByte(i);
  longByte(i);
  return 1;
}
