#include "Humidity.h"
#include <iostream>
#include <time.h>
using namespace std;
Humidity::Humidity()
{

}
double Humidity::generateHumidity()
{
    double n;
    srand(time(0));
    n=rand()%101; /// genereaza numar random intre 0 si 100
    return n;
}
double Humidity::readSensor()
{
    return generateHumidity();
}
