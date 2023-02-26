#include <stdio.h>

double findAverage(char *filename){
  FILE *steam;
  char str;
  int count = 0;
  double total = 0.0;
  double score = 0.0;
  
  steam = fopen(filename, "r");
  
  while(fscanf(steam, "%lf", &score) != EOF){
    total += score;
    count++;
  }
  fclose(steam);
  return (total/count);
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}