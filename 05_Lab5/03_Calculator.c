#include <stdio.h>

int main() {
  char swOp;
  float inp = 0.00;
  float total = 0.00;
  
  printf("Initial Value: ");
  scanf("%f", &total);

  while(1){
    printf("\nOperator: ");
    scanf("%s", &swOp);
    if(swOp != 43 && swOp != 45 && swOp != 42 && swOp != 47){
      break;
    }
    printf("Input Value: ");
    scanf("%f", &inp);
    
    switch (swOp){
    case 43://+
        total += inp;
        break;
    case 45://-
        total -= inp;
        break;
    case 42://*
        total *= inp;
        break;
    case 47:// /
        total /= inp;
        break;
    default:
        continue;
    }
    printf("Present Value is %.4f\n", total);
  }
  printf("\nFinish Calculation. Final Value is %.4f\n", total);
}
  