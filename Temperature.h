#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "ISensor.h"

class Temperature : public ISensor
{
    public:
        Temperature();

        double readSensor();

    protected:

    private:
       double generateTemperature();
};

#endif // TEMPERATURE_H
