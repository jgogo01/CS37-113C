#include <stdio.h>
#include <stdlib.h>

int main() {
  int countDay = 0;
  float goal = 0.00;
  float collected = 0.00;
  char strGoal[10];
  char strCollected[10];
  printf("Enter your goal amount: ");
  fgets(strGoal, 10, stdin);
  goal = atof(strGoal);
    
  while(collected < goal){
    printf("Enter money collected today: ");
    fgets(strCollected, 10, stdin);
    collected += atof(strCollected);
    countDay++;
      if(collected >= goal){
        if(countDay > 1){
          printf("Congratulations! You take %d days to reach your goal.", countDay);
        }else{
         printf("Congratulations! You take %d day to reach your goal.", countDay); 
        }
      }else{
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", countDay, collected, goal-collected); 
      }
  }
}
  