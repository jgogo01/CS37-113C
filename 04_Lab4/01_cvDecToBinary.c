#include <stdio.h>
#include <stdlib.h>

int main(){
    char charInput[5];
    int intInput = 0;
    int B1 = 0;
    int B2 = 0;
    int B3 = 0;
    int B4 = 0;

    fgets(charInput , 5, stdin);
    intInput = atoi(charInput);

    B4 = intInput%2;
    B3 = intInput/2%2;
    B2 = intInput/2/2%2;
    B1 = intInput/2/2/2%2;
  
    printf("Binary number of %d is %d%d%d%d.", intInput, B1, B2, B3, B4);
}