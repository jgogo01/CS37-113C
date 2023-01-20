#include <stdio.h>
#include <string.h>

int main() {
  int h = 0, m = 0;
  char type[5];
  
  printf("Enter a 12-hour time [eg. 12:34 am]: ");
  scanf("%d:%d %s", &h, &m, type);

  if(strcmp(type, "pm") == 0 || strcmp(type, "PM") == 0){ //0 is True
    if(h < 12){
      h = h + 12; 
    }
  }

  if(strcmp(type, "am") == 0 || strcmp(type, "AM") == 0){
    if(h >= 12){
      h = h - 12;
    }
  }
  printf("Equivalent 24-hour time: %02d:%02d", h, m);
}
  