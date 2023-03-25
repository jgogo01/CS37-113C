#include <iostream>
using namespace std;

class Transportation{
public: 
 virtual double fare() = 0;
};

class Taxi : public Transportation{
private:
  double distance;
public: 
  void setDistance(double distance){
    this->distance = distance;
  }
  double fare(){
    return 35+distance*2;
  }
};

class BmtaBus : public Transportation{
public: 
  double fare(){
    return 6.50;
  }
};

class BTS : public Transportation{
private:
  int station;
public:
  void setStation(int station){
    this->station = station;
  }
  double fare(){
    return 15+(station*5);
  }
};


class Passenger
{

};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        cout << "BTS fare: "
             << bts.fare() << endl;
    } else if(tc == 2) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}