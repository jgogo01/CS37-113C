#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D {
public:
  //pure virtual function
	virtual double volumn() = 0.0;
  virtual double surfaceArea() = 0.0;
};

class RightRectangularPyramid : public Shape3D{
private:
  double width;
  double length;
  double height;
public:
  RightRectangularPyramid(){
    this->width = 0.0;
    this->length = 0.0;
    this->height = 0.0;
  }
  RightRectangularPyramid(double width, double length, double height){
    this->width = width;
    this->length = length;
    this->height = height;
  }
  double volumn(){
    return (1.0/3.0)*width*length*height;
  }
  double surfaceArea(){
    return length*width + length*sqrt((width/2.0)*(width/2.0) + height*height) +
      width*sqrt((length/2.0)*(length/2.0) + height*height);
  }
};

class Sphere : public Shape3D{
private:
  double radius;
public:
  Sphere(){
    this->radius = 0.0;
  }
  Sphere(double radius){
    this->radius = radius;
  }
  double volumn(){
    return (4.0/3.0)*M_PI*radius*radius*radius;
  }
  double surfaceArea(){
    return 4.0*M_PI*radius*radius;
  }
};

int main()
{
int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}
}