#include "OwnedBird.h"
using namespace std;

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness):
Bird(happiness, energy, fullness),
Pet(name){};
