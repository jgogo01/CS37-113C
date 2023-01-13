#include <stdio.h>
#include <math.h>

int main() {
  //For Input
  long int input = 0;
  long int digitTemp = 0;
  int digit = 0;
  int countDigit = 0;

  //For Pow
  int countEq = 0;
  int digitPow = 0;
  long int resPow = 0;

  printf("Input n = ");
  scanf("%ld", &input);
  resPow = pow(input, 2);
  printf("n^2 = %ld\n", resPow);
  
  digitTemp = input;
  while(1){
    if(digitTemp == 0){ 
      break;
    }
      digit = digitTemp%10;
      digitTemp = digitTemp/10;
      countDigit++;

      digitPow = resPow%10;
      resPow = resPow/10;

      if(digit == digitPow){
        countEq++;
      }
  }

  if(countDigit == countEq){
    printf("Yes. %ld is automorphic number.", input);
  }else{
    printf("No. %ld is not automorphic number.", input);
  }
  
}
  #include <stdio.h>
#include <math.h>

//Use Loop 2 Only
//If Found From DESC Break

void FindPythagorean(int n){
  int resA = 0, resB = 0, resC = 0;
   for(int i = (n/2); i > 4; --i){
    for(int j = (i-1); j > 3; --j){
      resA = sqrt((i*i)-(j*j)); // Find A
      if(resA*resA+j*j == i*i && i+j+resA == n){
        resA = sqrt((i*i)-(j*j));
        resB = j;
        resC = i;
        printf("(%d, %d, %d)", resA, resB, resC);
        return;
      }
    }
  }
  printf("No triple found.");
  return;
}

int main() {
  int resA = 0, resB = 0, resC = 0;
  int check = 0;
  int n = 0;
  scanf("%d", &n);
  FindPythagorean(n);
}
  