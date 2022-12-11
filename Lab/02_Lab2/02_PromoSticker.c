#include <stdio.h>
#include <stdlib.h>

int main()
{

    char stkStr[5], priceStr[10];
    int stk = 0;
    float amount = 0;
    int persenDis = 0;

    fgets(stkStr, 5, stdin);
    fgets(priceStr, 10, stdin);
    stk = atoi(stkStr);
    amount = atof(priceStr);

    if (stk >= 9)
    {
        persenDis = 40;
        stk = stk - 9;
    }
    else if (stk >= 6)
    {
        persenDis = 30;
        stk = stk - 6;
    }
    else if (stk >= 3)
    {
        persenDis = 20;
        stk = stk - 3;
    }
    else if (stk >= 2)
    {
        persenDis = 15;
        stk = stk - 2;
    }
    else if (stk >= 1)
    {
        persenDis = 10;
        stk = stk - 1;
    }

    amount = amount - ((persenDis / 100.00) * amount);

    printf("You get %d percents discount.\n", persenDis);
    printf("Total amount due is %.2f Baht.\n", amount);
    printf("And you have %d stickers left.\n", stk);
}
