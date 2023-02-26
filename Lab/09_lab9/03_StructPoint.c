#include <stdio.h>
#include <math.h>

typedef struct Point__{
  double x;
  double y;
}Point;

double pointLength(double x1, double y1, double x2, double y2){
  double res = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
  return res;
}

int main(){
  int size;
  
  printf("Number of Points: ");
  scanf("%d", &size);
  
  Point points[size];
  for(int i = 0; i < size; i++){
    double dX, dY;
    printf("P%d.X: ", i+1);
    scanf("%lf", &points[i].x);
    printf("P%d.Y: ", i+1);
    scanf("%lf", &points[i].y);
  }

  printf("Length:\n");
  for(int i = 0; i < (size-1); i++){
    double x1 = points[i].x;
    double y1 = points[i].y;
    double x2 = points[i+1].x;
    double y2 = points[i+1].y;
    int p1 = i;
    int p2 = i+1;
    printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n",
    p1, x1, y1, p2, x2, y2, pointLength(x1, y1, x2, y2));
  }
}