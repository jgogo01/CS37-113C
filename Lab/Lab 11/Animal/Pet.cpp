#include "Pet.h"
using namespace std;

Pet::Pet(string name){
  this->name = name;
};

string Pet::getName(){
  return this->name;
}

void Pet::setName(string name){
  this->name = name;
}