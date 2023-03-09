#include <iostream>
#include <sstream>
using namespace std;

//Define Class
class GamePlayer{
private:
  string name;
  int maxHp;
  int hp;
public:
  //Getter
  string getName(){ return name; }
  int getHp(){ return hp; }

  void takeDamage(int damage){
    if(damage > 0){
      hp -= damage;
    }
    if(hp < 0){
      hp = 0;
    }
  }

  string toString(){
  stringstream ss;  
  ss << name << " (" << hp << "/" << maxHp << ")";
  return ss.str();
  }

  GamePlayer(string name, int maxHp){
    this->name = name;
    this->maxHp = maxHp;
    this->hp = maxHp;
  }

};

int main(){
  GamePlayer player1("Frung Fring", 100);
  GamePlayer player2("Professor", 50000);

  //New 
  GamePlayer* monster = new GamePlayer("Rookwood", 8000);
  cout << monster->toString() << endl;
  GamePlayer *monsters[10];
  monsters[0] = monster;
  monsters[1] = &player2;
  monsters[2] = new GamePlayer("Ranork", 8000);
  monsters[3] = new GamePlayer("Dubbox", 8000);

  for(int i = 0; i < 4; i++){
    monsters[i]->takeDamage(i * 10);
    cout << monsters[i]->getName() << endl;
  }
  
  // player1.takeDamage(10);
  // player2.takeDamage(1000);
  // cout << player1.toString() << endl;
  // cout << player2.toString();
  
  // printf("\n-----------------\n");
  
  // player1.takeDamage(1000);
  // player2.takeDamage(1);
  // cout << player1.toString() << endl;
  // cout << player2.toString();
}