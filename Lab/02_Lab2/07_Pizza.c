#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Input String
    char sizeStr[3];
    char pepperoniStr[3];
    char cheeseStr[3];
    char mushroomStr[3];

    //Input Int
    int size = 0;
    int pepperoni = 0;
    int cheese = 0;
    int mushroom = 0;

    //Calculate
    float extra = 0.00;
    float area = 0.00;
    int radius = 0;
    float price = 0.00;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(sizeStr, 3, stdin);
    size = atoi(sizeStr);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoniStr, 3, stdin);
    pepperoni = atoi(pepperoniStr);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheeseStr, 3, stdin);
    cheese = atoi(cheeseStr);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroomStr, 3, stdin);
    mushroom = atoi(mushroomStr);

    if(size == 1){
        radius = 10;
    }else if (size == 2){
        radius = 16;
    }else if (size == 3){
        radius = 20;
    }

    if(pepperoni){
        extra += 0.5;
    }
    if(cheese){
        extra += 0.25;
    }
    if(mushroom){
        extra += 0.30;
    }
    
    area = M_PI * (pow(radius, 2)/4);
    price = 5 + (2 * area) + (extra * area);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", price*1.5);
    printf("Thank you.");
}