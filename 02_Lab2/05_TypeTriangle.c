#include <stdio.h>
#include <stdlib.h>

int main(){
    char aStr[3];
    char bStr[3];
    char cStr[3];

    printf("Enter length of side A: ");
    fgets(aStr, 3, stdin);
    printf("Enter length of side B: ");
    fgets(bStr, 3, stdin);
    printf("Enter length of side C: ");
    fgets(cStr, 3, stdin);

    int a = atoi(aStr);
    int b = atoi(bStr);
    int c = atoi(cStr);

    if ((a < 0 || b < 0 || c < 0) || (a + b <= c || a + c <= b || b + c <= a)){
        printf("Triangle type is invalid.");
    }
    else if(a == b && b == c){
        printf("Triangle type is equilateral.");
    }
    else if (a == b || b == c || a == c){
        printf("Triangle type is isosceles.");
    }
    else{
        printf("Triangle type is scalene.");
    }
}