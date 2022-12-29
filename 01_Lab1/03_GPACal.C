#include <stdio.h>
int main(){
    
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;

    float preGPA = preGrade*preCredit;
    int totalCredit = preCredit + credit;
 
    float ReqGPATerm = ((requiredGrade*totalCredit)-preGPA)/credit;
    printf("The GPA this semester should be %.2f", ReqGPATerm);
}