#include <stdio.h>
#include <string.h>

struct Word {
  char word[20];
  int count;
};

int main(){
  char input[21];
  int i, last_word = 0, find = 0;
  struct Word data[20] = {0};
  scanf("%20s", input);

  while(1){
    if(strcmp(input, "exit")){
      break;
    }
  
  }

  printf("Output:\n");
  for(i=0;i<last_word;i++){
    printf("%s = %d\n", data[i].word, data[i].count);
  }
}