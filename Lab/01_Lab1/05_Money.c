#include <stdio.h>

int main(){
    int amount = 98;

    int fifty = amount/50;
    amount = amount-(fifty*50);
    int twenty = amount/20;
    amount = amount-(twenty*20);
    int five = amount/5;
    amount = amount-(five*5);

    printf("1: %d\n", amount);
    printf("5: %d\n", five);
    printf("20: %d\n", twenty);
    printf("50: %d", fifty);
}