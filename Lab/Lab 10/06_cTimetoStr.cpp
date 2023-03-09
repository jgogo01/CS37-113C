#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Time{
private:
  int hour;
  int minute;
  int second;
public:
  //Getter
  int getHour(){
    return this->hour;
  }
  int getMinute(){
    return this->minute;
  }
  int getSecond(){
    return this->second;
  }
  //Setter
  Time(int hour, int minute, int second){
    if(second > 59){
      minute += second % 60;
      second -= (second % 60)*60;
    }
    if(minute > 59){
      hour += minute / 60;
      minute = minute % 60;
    }
    this->second = second;
    this->minute = minute;
    this->hour = hour%24;
  }
	Time(int duration){
    this->hour = duration/3600;
    this->minute = duration%3600/60;
    this->second = duration%3600%60;
    while(this->hour >= 24){
      this->hour -= 24;
    }
  }
  //etc.
  int getDuration(){
    return (this->hour)*3600 + (this->minute)*60 +
    (this->second);
  }
  Time add(Time other){
    return other.getDuration() + getDuration();
  }
  int	subtract(Time other){
    if(other.getDuration() > getDuration()){
      return 86400 - other.getDuration()+getDuration();
    }else{
      return getDuration() - other.getDuration();
    }
  }
  int	equals(Time other){
    if(other.getDuration() == getDuration()){
      return 1;
    }else{
      return 0;
    }
  }
  string toString(){
    string s;
    if(this->hour <= 9){
      s += '0';
    }
    s+= to_string(this->hour) + ':';
    if(this->minute <= 9){
      s += '0';
    }
    s+= to_string(this->minute) + ':';
    if(this->second <= 9){
      s += '0';
    }
    s+= to_string(this->second);
    return s;
  }
};

int main(){
  Time main(45,121,59);
  Time other(00,00,00);
  cout << main.toString() << endl;
  cout << "Dis Main: " << main.getDuration() << endl;
  cout << "Dis Other: " << other.getDuration() << endl;
  cout << main.subtract(other) << endl;
  cout << other.subtract(main) << endl;
  if(main.equals(other)){
    cout << "eq" << endl;
  }else{
    cout << "non-eq" << endl;
  }
  
}