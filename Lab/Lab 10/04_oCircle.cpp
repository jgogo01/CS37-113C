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

int main(){
  point pCen;
  point pCk;
  double radius;
  
  cout << "Center of Circle: ";
  cin >> pCen.xPosition;
  cin >> pCen.yPosition;
  cout << "Radius of Circle: ";
  cin >> radius;
  cout << "Point to Check: ";
  cin >> pCk.xPosition;
  cin >> pCk.yPosition;

  Circle c(pCen, radius);
  cout << "Area of Circle is ";
  cout << c.area() << endl;
  cout << "Distance from Center to Point"
  << " (" << pCk.xPosition << ", " << pCk.yPosition << ")"
  << " is " << c.distanceFromCenter(pCk) << endl;
  
  if(c.contains(pCk)){
    cout << "This circle contains this point.";
  }else{
    cout << "This point is not in this circle.";
  }
  
}