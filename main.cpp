#include <iostream>
#include "House.h"
#include "Living.h"
#include "Bedroom.h"
#include "Bathroom.h"
#include "Kitchen.h"
using namespace std;

int main()
{
    House *house = new House();
    Living *living = new Living();
    house->addRoom(living);
    Bedroom *bedroom = new Bedroom();
    house->addRoom(bedroom);
    Bathroom *bathroom = new Bathroom();
    house->addRoom(bathroom);
    Kitchen *kitchen = new Kitchen();
    house->addRoom(kitchen);
    house->collectRoomData();
    house->viewRoomData();

    return 0;
}
