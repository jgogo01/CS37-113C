#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salaryStr[20];
    fgets(salaryStr, 20, stdin);
    float salary = atof(salaryStr);
    float tax = 0.00;

    if (salary < 0.00)
    {
        printf("Error: Salary must be greater or equal to 0");
    }
    else
    {
        if (salary > 300000.00)
        {
            tax = (300000.00 * (5 / 100.00)) + ((salary - 300000.00) * (10 / 100.00));
        }
        else
        {
            tax = salary * (5 / 100.00);
        }
        printf("%.2f", tax);
    }
}