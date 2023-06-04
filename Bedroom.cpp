#include "Bedroom.h"
#include "Temperature.h"
#include "Pressure.h"
#include "Humidity.h"
#include <fstream>
#include <iostream>
using namespace std;
Bedroom::Bedroom()
{
    Temperature *temperature = new Temperature();
    Pressure *pressure= new Pressure();
    Humidity *humidity= new Humidity();
    sensors.push_back(temperature);
    sensors.push_back(pressure);
    sensors.push_back(humidity);
}
void Bedroom::createRoom()
{
    ifstream f("CreateRoom_bedroom.txt");
}
void Bedroom::readRoom()
{
    cout<<"Senzorii pentru camera Bedroom sunt: ";
    for(int i=0;i<sensors.size();i++)
    {
        cout<<sensors[i]->readSensor()<<" ";
    }
    cout<<endl;
}
void Bedroom::updateRoom()
{
    ofstream g("CreateRoom_bedroom.txt");
    for(int i=0; i<sensors.size(); i++)
    {
        g<<sensors[i]->readSensor()<<" ";
    }
    g<<endl;
}
void Bedroom::deleteRoom()
{
    remove("CreateRoom_bedroom.txt");
}
