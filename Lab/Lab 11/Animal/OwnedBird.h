#ifndef OWNEDBIRD_H
#define OWNEDBIRD_H

#include "Bird.h"
#include "Pet.h"
using namespace std;

class OwnedBird : public Bird, public Pet{
public:
    OwnedBird(string, int, int, int);
};

#endif