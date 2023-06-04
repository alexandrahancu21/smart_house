#include "Temperature.h"
#include <iostream>
#include <time.h>
using namespace std;
Temperature::Temperature()
{

}
double Temperature::generateTemperature()
{
    double n;
    srand(time(0));
    n=rand()%126-40; /// genereaza numar random intre -40 si 85
    return n;

}

double Temperature::readSensor()
{
    return generateTemperature();
}
