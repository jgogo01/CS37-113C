#include <stdio.h>
#include <stdlib.h>

int main(){
    char numStr[10];
    int num = 0;
    int start = 0;
    int end = 0;

    fgets(numStr, 10, stdin);
    num = atoi(numStr);
    if(num > 26 || num <= 0){
      printf("-");
    }else if(num == 1){
      printf("a");
    }else{
      //Start
      for(int i = num+96; i > 97; --i){
        printf("%c-", i);
      }
      //Center
      printf("a");
      //End
      for(int i = 98; i < num+97; ++i){
        printf("-%c", i);
      }
    }
}