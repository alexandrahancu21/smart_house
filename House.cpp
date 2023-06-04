#include "House.h"
#include <iostream>
#include <fstream>
using namespace std;
House::House()
{
    //ctor
}
void House::addRoom(IRoom *room)
{
    rooms.push_back(room);
}
void House::removeRoom(int id)
{
    rooms.erase(next(rooms.begin(),id));
}
void House::collectRoomData()
{
    for(int i=0;i<rooms.size();i++)
    {
        rooms[i]->updateRoom();
    }
}
void House::viewRoomData()
{
    for(int i=0;i<rooms.size();i++)
    {
        rooms[i]->readRoom();
    }
}
