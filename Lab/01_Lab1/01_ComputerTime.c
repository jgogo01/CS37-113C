#include<stdio.h>

int main() {
    int computer_time = 1678; 
    int day = computer_time/(60*24);
    int minRemainDay = computer_time%(60*24);
    int hour = minRemainDay/60;
    int min = minRemainDay%60;
    printf("It is %d days %d hours and %d minutes.", day, hour, min);
}