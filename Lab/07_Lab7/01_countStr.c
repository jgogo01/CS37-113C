#include <stdio.h>
int main() {
  char str[100];
  int count = 0;
  int vow[10] = {'a', 'e', 'i', 'o', 'u', 'A'
  ,'E', 'I', 'O', 'U'};
  printf("String (without a space): ");
  scanf("%s", str);

  for(int i = 0; str[i] != '\0'; i++){
    for(int j = 0; vow[j] != '\0'; j++){
      if(str[i] == vow[j]){
        printf("%c ", str[i]);
        count++;
      }
    }
  }
  if(count > 1){
   printf("\nThis string contains %d vowels.", count); 
  }else{
   printf("\nThis string contains %d vowel.", count); 
  }
  return 0;
}