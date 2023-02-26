#include <stdio.h>

struct vector {
  float x;
  float y;
  float z;
};

int main(){
  struct vector v;
  struct vector u;
  struct vector r;
  
  printf("Enter u: ");
  scanf("%f %f %f", &u.x, &u.y, &u.z);
  printf("Enter v: ");
  scanf("%f %f %f", &v.x, &v.y, &v.z);

  r.x = u.y*v.z - u.z*v.y;
  r.y = u.z*v.x - u.x*v.z;
  r.z = u.x*v.y - u.y*v.x;

  printf("u x v = %.1f %.1f %.1f", r.x, r.y, r.z);
  return 0;
}