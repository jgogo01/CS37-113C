#include <stdio.h>
#include <string.h>

typedef struct GamePlayer__{
  char name[20];
  int hp;
  int maxHp;
} GamePlayer;

//typedef struct GamePlayer__ GamePlayer;

//Pass By Value
void PrintGamerPlayer(GamePlayer player){
  printf("Name %s\n", player.name);
  printf("HP: %d/%d\n", player.hp, player.maxHp);
}

//Pass By Ref
void takeDamagePlayer(GamePlayer *player, int damage){
  (*player).hp -= damage;
  //player->hp -= damage;
}

int main(){
  GamePlayer player1;
  int damage = 100;
  
  sprintf(player1.name, "Thaipong");
  player1.maxHp = 1000;
  player1.hp = 1000;

  takeDamagePlayer(&player1, 999);
  PrintGamerPlayer(player1);
}