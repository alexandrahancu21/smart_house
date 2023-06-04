#include "Living.h"
#include "Temperature.h"
#include "Pressure.h"
#include "Humidity.h"
#include <fstream>
#include <iostream>
using namespace std;
Living::Living()
{
    Temperature *temperature = new Temperature();
    Pressure *pressure= new Pressure();
    Humidity *humidity= new Humidity();
    sensors.push_back(temperature);
    sensors.push_back(pressure);
    sensors.push_back(humidity);
}
void Living::createRoom()
{
    ifstream f("CreateRoom_living.txt");

}
void Living::readRoom()
{
    cout<<"Senzorii pentru camera Living sunt: ";
    for(int i=0;i<sensors.size();i++)
    {
        cout<<sensors[i]->readSensor()<<" ";
    }
    cout<<endl;
}
void Living::updateRoom()
{
    ofstream g("CreateRoom_living.txt");
    for(int i=0;i<sensors.size();i++)
    {
        g<<sensors[i]->readSensor()<<" ";
    }
    g<<endl;
}
void Living::deleteRoom()
{
    remove("CreateRoom_living.txt");
}
