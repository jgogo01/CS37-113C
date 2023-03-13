#include "Bird.h"
using namespace std;

Bird::Bird(int happiness, int energy, int fullness) :
Animal(happiness, energy, fullness)
{}

void Bird::fly(int hour){
  if(hour <= 0){
    return;
  }
  this->energy -= hour*5;
  this->limitStat();
}
void Bird::sing(){
  this->happiness += 5;
  this->limitStat();
}