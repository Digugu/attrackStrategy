#ifndef UNITTYPES_H
#define UNITTYPES_H
#include<unit.h>

// TODO: Add declarations for your unit types here.
// This is just to make it easier to mark.

class Soldier : public Unit
{
public:
    int pCost;
    int hP;
    int attack;
    Soldier():Unit(20){}
};

class Archer : public Unit
{
public:
    Archer():Unit(20){}
};

class Chariot : public Unit
{
public:
    Chariot():Unit(30){}
};










#endif // UNITTYPES_H
