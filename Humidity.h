#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "ISensor.h"

class Humidity : public ISensor
{
    public:
        Humidity();

        double readSensor();

    protected:

    private:
        double generateHumidity();
};

#endif // HUMIDITY_H
