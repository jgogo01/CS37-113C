#include <iostream>
using namespace std;

int main() {
  int x;
  int count = 0;
  cin >> x;
  if(x > 0){
  while(1){
      if(x % 2 != 0){
        x = x - 1;
      }else{
        x = x / 2;
      }
      count++;
      if(x == 0){
        break;
      }
    }
  }
  cout << count;
}