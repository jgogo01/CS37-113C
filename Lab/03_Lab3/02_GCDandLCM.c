#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    int min, max, mod, gcd;
    char xStr[10], yStr[10];

    fgets(xStr, 10, stdin);
    fgets(yStr, 10, stdin);

    x = atoi(xStr);
    y = atoi(yStr);

    //Cal
    if(x >= y){
      min = y;
      max = x;
    }else{
      min = x;
      max = y;
    }
    
    while(0){
      if(mod == 0){
        break;
      }
      mod = max%min;
      max = min;
      min = mod;
    }
    gcd = min;
    printf("GCD : %d", gcd);
}
  