#include <stdio.h>

double findPI(int n){
  double pi = 0.00;
  int round = 1;
  for(int i = 1; i < (n*2); i += 2){
    if(round % 2 == 0){
      pi -= 4.0/i;
    }else{
      pi += 4.0/i;
    }
    round++;
  }
  return pi;
}

int main() {
  int n = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("%.10f", findPI(n));
}
  