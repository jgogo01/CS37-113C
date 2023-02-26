#include <iostream>
using namespace std;

typedef struct Word_ {
  string name;
  int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
      cin >> input;
      if (input == "exit") {
        break;
      }
      find = -1;
      //Find
      for(int i = 0; i < last_word; i++){
        if(data[i].name == input){
          find = i;
        }
      }

      if(find == -1){
        data[last_word].name = input;
        data[last_word].count = 1;
        last_word++;
      }else{
        data[find].count++;
      }
    }

    cout << "Output:" << endl;
    for(int i = 0; i < last_word; i++){
      cout << data[i].name << " = " << data[i].count << endl;
    }


    return 0;
}