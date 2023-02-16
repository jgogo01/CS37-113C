#include <stdio.h>

int remove_vowel(char* str){
  int vow[12] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  for(int i = 0; str[i] != '\0'; i++){
    for(int j = 0; vow[j] != '\0'; j++){
       if(str[i] == vow[j]){
         //Loop Delete
         for(int k = i; str[k] != '\0'; k++){
            str[k] = str[k+1];
            if(str[k+1] == '\0'){
              str[k] = '\0';
              i = -1;
            }
         }
       }
    }
  }
}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}