#include "Animal.h"
using namespace std;

void Animal::limitStat(){
  if(this->happiness > this->MAX_HAPPINESS){
    this->happiness = this->MAX_HAPPINESS;
  }
  if(this->energy > this->MAX_ENERGY){
    this->energy = this->MAX_ENERGY;
  }
  if(this->fullness > this->MAX_FULLNESS){
    this->fullness = this->MAX_FULLNESS;
  }
  if(this->happiness < 0){
    this->happiness = 0;
  }
  if(this->energy < 0){
    this->energy = 0;
  }
  if(this->fullness < 0){
    this->fullness = 0;
  }
};

Animal::Animal(int happiness, int energy, int fullness){
  this->happiness = happiness;
  this->energy = energy;
  this->fullness = fullness;
  this->limitStat();
};

int Animal::getHappiness(){
  return this->happiness;
}

int Animal::getEnergy(){
  return this->energy;
}

int Animal::getFullness(){
  return this->fullness;
}

void Animal::eat(int food){
  if(food <= 0){
    return;
  }
  this->fullness += food;
  if(this->fullness > this->MAX_FULLNESS){
    this->happiness -= 10;
  }
  this->limitStat();    
}

void Animal::play(int hour){
  if(hour <= 0){
    return;  
  }
  if(this->energy == 0 || this->fullness == 0){
    return;
  }
  this->energy -= hour*10;
  this->fullness -= hour*20;
  this->happiness += hour*5;
  this->limitStat();    
}

void Animal::sleep(int hour){
  if(hour <= 0){
    return;
  }
  this->energy += hour*10;
  this->fullness -= hour*10;
  this->limitStat();    
}