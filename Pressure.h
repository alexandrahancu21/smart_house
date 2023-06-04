#ifndef PRESSURE_H
#define PRESSURE_H
#include "ISensor.h"

class Pressure : public ISensor
{
    public:
        Pressure();
        double readSensor();

    protected:

    private:
        double generatePressure();
};

#endif // PRESSURE_H
