#include "Bathroom.h"
#include "Temperature.h"
#include "Pressure.h"
#include "Humidity.h"
#include <fstream>
#include <iostream>
using namespace std;
Bathroom::Bathroom()
{
    Temperature *temperature = new Temperature();
    Pressure *pressure= new Pressure();
    Humidity *humidity= new Humidity();
    sensors.push_back(temperature);
    sensors.push_back(pressure);
    sensors.push_back(humidity);
}
void Bathroom::createRoom()
{
    ifstream f("CreateRoom_living.txt");
}
void Bathroom::readRoom()
{
    cout<<"Senzorii pentru camera Bathroom sunt: ";
    for(int i=0;i<sensors.size();i++)
    {
        cout<<sensors[i]->readSensor()<<" ";
    }
    cout<<endl;
}
void Bathroom::updateRoom()
{
    ofstream g("CreateRoom_bathroom.txt");
    for(int i=0;i<sensors.size();i++)
    {
        g<<sensors[i]->readSensor()<<" ";
    }
    g<<endl;
}
void Bathroom::deleteRoom()
{
    remove("CreateRoom_bathroom.txt");
}
