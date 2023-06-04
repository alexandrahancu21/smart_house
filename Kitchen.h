#ifndef KITCHEN_H
#define KITCHEN_H
#include "IRoom.h"
#include "ISensor.h"
#include <iostream>
#include <vector>
using namespace std;
class Kitchen : public IRoom
{
    public:
        Kitchen();

        virtual void createRoom();
        virtual void readRoom();
        virtual void updateRoom();
        virtual void deleteRoom();

    protected:

    private:
        vector <ISensor*> sensors;
};

#endif // KITCHEN_H
