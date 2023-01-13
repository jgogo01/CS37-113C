#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
  int i = 0;
  int count = 0;
  
  for(i = 1; i <= num; ++i){
    if(num % i == 0){
      count += 1;
    }
  }
  if(count == 2){
    return 1;
  }else{
    return 0;
  }
}

int main() {
  char input[5];
  fgets(input, 5, stdin);
  int i, n;
  n = atoi(input);
  for (i = 0; i <= n; ++i) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }
  return 0;
}