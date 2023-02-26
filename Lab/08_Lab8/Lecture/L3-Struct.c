#include <stdio.h>
#include <string.h>

typedef struct GamePlayer__{
  char name[20];
  int hp;
  int maxHp;
} GamePlayer;

//Pass By Value
void PrintGamerPlayer(GamePlayer player){
  printf("Name %s\n", player.name);
  printf("HP: %d/%d\n", player.hp, player.maxHp);
}

void findTopGameMaxHp(GamePlayer player[], int size, GamePlayer** topMaxHp){
  *topMaxHp = &player[0];
  for(int i = 0; i < size; i++){
    if(player[i].maxHp > (*topMaxHp)->maxHp){
      *topMaxHp = &player[i];
    }
  }
}

int main(){
  GamePlayer player[10], *topMaxHp;
  int size = 4;
  
  strcpy(player[0].name, "Thatpong");
  strcpy(player[1].name, "Teerut");
  strcpy(player[2].name, "Natdanai");
  strcpy(player[3].name, "Peerawit");

  player[0].maxHp = 1000;
  player[1].maxHp = 100;
  player[2].maxHp = 1001;
  player[3].maxHp = 1;
  
  for(int i = 0; i < size; i++){
    player[i].hp = player[i].maxHp;
  }

  findTopGameMaxHp(player, size, &topMaxHp);
  PrintGamerPlayer(*topMaxHp);
}