#include <iostream>
#include <string>
using namespace std;

class Hero{
private:
  string name;
  int level;
public:
  Hero(string name, int level){
    this->name = name;
    this->level = level;
  }; 
  string getName(){return name;}
  int getLevel(){return level;}
};

int main()
{
  Hero Kittikul("Pro", 1);
  Hero Sarawut("Beer", 100);

  cout << Sarawut.getName() << endl;
}