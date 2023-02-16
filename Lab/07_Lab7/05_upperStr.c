#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char str[]) {
  char* ptr;
  ptr = (char*)malloc(100 * sizeof(char));
  for(int i = 0; str[i] != '\0'; i++){
    ptr[i] = toupper(str[i]);
  }
  return ptr;
}

int main(){
	char s[100];
	char* result;
	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}