#include <stdio.h>
#include <string.h>

int cvGrade(char grade){
    if( grade == 'a' || grade == 'A' ){
        return 4;
    }

    if( grade == 'b' || grade == 'B' ){
        return 3;
    }

    if( grade == 'c' || grade == 'C' ){
        return 2;
    }

    if(grade == 'd' || grade == 'D' ){
        return 1;
    }

    if( grade == 'f' || grade == 'F' ){
        return 0;
    }
}

int main(){
    int sj = 0;
    int credit = 0;
    float gpa = 0.00;
    int totalCredit = 0;
    char grade;

    printf("Enter number of subject(s): ");
    scanf("%d", &sj); 

    for(int i = 1; i <= sj; i++){
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &grade); 
        totalCredit += credit;
        gpa += credit * cvGrade(grade);
    }

    printf("GPA = %.2f", gpa/totalCredit);
}