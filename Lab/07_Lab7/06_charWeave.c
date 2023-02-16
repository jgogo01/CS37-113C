#include <stdio.h>

int charcount(char *s){
  int i = 0;
  for(i = 0; s[i] != '\0'; i++){
   }
  return i;
}

void charweave(char *s,char *result){
  int totalChar = charcount(s);
  int idxL = 0;
  int idxR = totalChar-1;
  int i = 0;
  
  for(i = 0; i < totalChar && s[i] != '\0'; i++){
    if(i % 2 != 0){
      result[i] = s[idxR];
      idxR--;
    }else{
      result[i] = s[idxL];
      idxL++;
    }
  }
  //Rev
  for(i = 0; i < totalChar && s[i] != '\0'; i++){
    result[totalChar+i] = result[totalChar-1-i];
  }
   result[totalChar+i] = '\0';
}

int main(){  
    char str[100],result[200];
   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}