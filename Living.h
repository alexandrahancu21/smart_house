#ifndef LIVING_H
#define LIVING_H
#include "IRoom.h"
#include "ISensor.h"
#include <iostream>
#include <vector>
using namespace std;
class Living : public IRoom
{
    public:
        Living();

        virtual void createRoom();
        virtual void readRoom();
        virtual void updateRoom();
        virtual void deleteRoom();

    protected:

    private:
        vector <ISensor*> sensors;
};

#endif // LIVING_H
