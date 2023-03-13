#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
private:
  string name[22];
  int index = 0;
  int curr = 0;
public:
  void add(string name){
    this->name[this->index] = name;
    this->index++;
  }

  void setCurrentTrack(int curr){
    this->curr = curr-1;
  }

  string play(){
    return this->name[this->curr];
  }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(2);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}