#include <stdio.h>
#include <stdlib.h>

long int cvDecToBinary(int n){
  if(n == 0) return 0;
  return n % 2 + 10 * (cvDecToBinary(n / 2));
}

int main() {
  char strDec[10];
  int Dec = 0;
  fgets(strDec, 10, stdin);
  Dec = atoi(strDec);
  printf("%ld", cvDecToBinary(Dec));
}
  