#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include "IRoom.h"
#include <vector>
using namespace std;
class House
{
public:
    House();

    virtual void addRoom(IRoom*);
    void removeRoom(int);
    void collectRoomData();
    void viewRoomData();

protected:

private:
    vector <IRoom*> rooms;
};

#endif // HOUSE_H
