#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
  point center;
  double radius;
public:
  Circle(point center, double radius){
    this->center.xPosition = center.xPosition;
    this->center.yPosition = center.yPosition;
    this->radius = radius;
  }
  double area(){
    return M_PI*this->radius*this->radius;
  }
  double distanceFromCenter(point pt){
    return sqrt(
    pow(this->center.xPosition - pt.xPosition, 2) +
    pow(this->center.yPosition - pt.yPosition, 2) );
  }
  int contains(point pt){
    if(distanceFromCenter(pt) <= this->radius){
      return 1;
      }else{
      return 0;
      }
  }
};

int main()
{
  point p1;
  p1.xPosition = 7;
  p1.yPosition = 2;

  point p2;
  p2.xPosition = 7;
  p2.yPosition = 20;

  Circle c1(p1, 10);
  cout << c1.distanceFromCenter(p2) << endl;
  cout << c1.contains(p2) << endl;
}