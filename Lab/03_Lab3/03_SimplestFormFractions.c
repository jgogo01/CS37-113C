#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    int min, max, mod, gcd;
    char xStr[20], yStr[20];

    fgets(xStr, 20, stdin);
    fgets(yStr, 20, stdin);

    x = atoi(xStr);
    y = atoi(yStr);
    //Cal
    if(x > y){
      min = y;
      max = x;
    }else{
      min = x;
      max = y;
    }

    while(1){
      mod = max%min;
      if(mod == 0){
        break;
      }
      max = min;
      min = mod;
    }
    gcd = min;
    
    //Res
    printf("= %d", x/gcd);
    (y/gcd != 1) ? printf("/%d",y/gcd) : printf("");
}
  