#ifndef BEDROOM_H
#define BEDROOM_H
#include "IRoom.h"
#include "ISensor.h"
#include <iostream>
#include <vector>
using namespace std;
class Bedroom : public IRoom
{
    public:
        Bedroom();

        virtual void createRoom();
        virtual void readRoom();
        virtual void updateRoom();
        virtual void deleteRoom();

    protected:

    private:
        vector <ISensor*> sensors;
};

#endif // BEDROOM_H
