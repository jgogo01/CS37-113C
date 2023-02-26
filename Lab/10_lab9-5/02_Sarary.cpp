#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  char name[50];
  char buffer[100];
  float sarary = 0.0;
  float total = 0.0;

  cin >> name;
  cin >> sarary;

  for(int i = 0; i < 12; i++){
    float x = 0.0;
    cin >> x;
    total += x*(15.0/100);
  }

  total += sarary*12;
  sprintf(buffer, "%s %.2f",name ,total);
  cout << buffer;
}