#include "Ship.h"
#include <string>
enum SpaceType{
    ISLAND,
    SEA
};

class Island{
    private:
        string name;

};

class Space{
    private:
        SpaceType type;
        Faction faction;
        Island island; //use if squareType is an island
        int pirateNum; //use if faction is PIRATE
        int row;
        int col;
        int searched; //tells how many times the space was landed on.

};