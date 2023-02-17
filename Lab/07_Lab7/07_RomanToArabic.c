#include <stdio.h>

void roman2arabic(const char input[], char output[]) {

    int roman2Int(char c) {
      switch(c){
          case 'I':
              return 1;
          case 'V':
              return 5;
          case 'X':
              return 10;
          default:
              return 0;
      }
  }
  
    int i = 0;
    int total = 0;
    int curr, next;
    const char *str = input;
    while (*str != '\0') {
        if (*str == 'I' || *str == 'V' || *str == 'X') {
            curr = roman2Int(*str);
            next = roman2Int(*(str + 1));
            if (curr < next) {
                total -= curr;
            } else {
                total += curr;
            }
        } else if (total != 0) {
            char buf[80];
            int length = sprintf(buf, "%d", total);
            for (int j = 0; j < length; j++) {
                output[i++] = buf[j];
            }
            output[i++] = *str;
            total = 0;
        } else {
            output[i++] = *str;
        }
        str++;
    }
    if (total != 0) {
        char buf[80];
        int length = sprintf(buf, "%d", total);
        for (int j = 0; j < length; j++) {
            output[i++] = buf[j];
        }
    }
    output[i] = '\0';
}

int main(){  
    char input[80],output[80];

    printf(" Input: ");
    gets(input);  /* read a line of characters from the input to "input" variable */

    roman2arabic(input,output);
    printf("Output: %s\n",output);

return 0;
}