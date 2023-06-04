#ifndef BATHROOM_H
#define BATHROOM_H
#include "IRoom.h"
#include "ISensor.h"
#include <iostream>
#include <vector>
using namespace std;

class Bathroom : public IRoom
{
    public:
        Bathroom();

        virtual void createRoom();
        virtual void readRoom();
        virtual void updateRoom();
        virtual void deleteRoom();

    protected:

    private:
        vector <ISensor*> sensors;
};

#endif // BATHROOM_H
