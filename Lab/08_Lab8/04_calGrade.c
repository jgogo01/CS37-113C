#include <stdio.h>

typedef struct student__{
  char id[12];
  char grade;
}Student;

char calculateGrade(int x){
    if(x >= 80){
      return 'A';
    }else if(x >= 70){
      return 'B';
    }else if(x >= 60){
      return 'C';
    }else if(x >= 50){
      return 'D';
    }else{
      return 'F';
    }
}

int main(){
  //Loop Input
  Student stdList[5];

  for(int i = 0; i < 5; i++){
    int midScore = 0;
    int finalScore = 0;
    char id[12];
    
    printf("Enter Student ID: ");
    scanf("%s", stdList[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &midScore);
    printf("Enter Student Final: ");
    scanf("%d", &finalScore);

    //CalGrade
    stdList[i].grade = calculateGrade(midScore+finalScore);
  }

  //PrintRes
  for(int i = 0; i < 5; i++){
    printf("Student ID %s receives grade %c.\n", stdList[i].id, stdList[i].grade);
  }
}