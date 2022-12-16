#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int round = 0;
    char roundStr[10];

    fgets(roundStr, 10, stdin);
    round = atoi(roundStr);

    for(i = round; i >= 0; --i){
        printf("%i\n", i);
    }
}