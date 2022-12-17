#include <stdio.h>
#include <stdlib.h>

int main() {
    long long x, y;
    long long min, max, mod, gcd;
    char xStr[20], yStr[20];

    fgets(xStr, 20, stdin);
    fgets(yStr, 20, stdin);

    x = atoll(xStr);
    y = atoll(yStr);

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
    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld", (x*y)/gcd);
}
  