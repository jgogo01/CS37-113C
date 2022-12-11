#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input = getchar();
    if (input >= 'a' && input <= 'z')
    {
        printf("Output: lower case ");
    }
    else if (input >= 'A' && input <= 'Z')
    {
        printf("Output: upper case ");
    }
    else if (input >= '0' && input <= '9')
    {
        printf("Output: digit ");
    }
    else
    {
        printf("Output: others");
    }
}