#include <stdio.h>

int main(){   
  unsigned char x;
  int n;

  printf("Enter an 8-bit number: ");
  scanf("%d", &n);
  x = (unsigned char)n;
  int numbits = (x & 0x55) + ((x >> 1) & 0x55);
  numbits = (numbits & 0x33) + ((numbits >> 2) & 0x33);
  numbits = (numbits & 0x0F) + ((numbits >> 4) & 0x0F);
  printf("The number %d has %d non-zero bits\n", x, numbits);
  return 0;
}