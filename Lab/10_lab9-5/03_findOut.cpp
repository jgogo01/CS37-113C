#include <iostream>
using namespace std;

int main(){
  int size;
  int n;

  cin >> size;
  int arrInp[size] = {0};
  int max = 0;
  
  for(int i = 0; i < size; i++){
    cin >> n;
    arrInp[i] = n;
    //Find Max
    if(n > max){
      max = n;
    }
  }

  int arrRes[max] = {0};
  for(int i = 0; i < size; i++){
    arrRes[ arrInp[i] ] = 1;
  }

  //Res
  for(int i = 1; i <= max; i++){
    if(arrRes[i] == 0 && i % 2 != 0){
      cout << i << " ";
    }
  }
  cout << endl;
  for(int i = 1; i <= max; i++){
    if(arrRes[i] == 0 && i % 2 == 0){
      cout << i << " ";
    }
  }
}