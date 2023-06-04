#include "Pressure.h"
#include <iostream>
#include <time.h>
using namespace std;
Pressure::Pressure()
{

}
double Pressure::generatePressure()
{
    double n;
    srand(time(0));
    n=rand()%801-300; /// genereaza numar random intre 300 si 1100
    return n;
}
double Pressure::readSensor()
{
    return generatePressure();
}
