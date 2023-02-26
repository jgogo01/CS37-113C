#include <stdio.h>
#include <string.h>

struct GamePlayer{
  char name[20];
  int hp;
  int maxHp;
};

int main(){
  struct GamePlayer player1;
  //player1.name = "Thatpong";
  strcpy(player1.name, "Thatpong");
  sprintf(player1.name, "Thaipong");
  player1.maxHp = 100;
  player1.hp = 10;

  printf("Name %s\n", player1.name);
  printf("HP: %d/%d\n", player1.hp, player1.maxHp);
}