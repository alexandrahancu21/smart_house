#include "Kitchen.h"
#include "Temperature.h"
#include "Pressure.h"
#include "Humidity.h"
#include <fstream>
#include <iostream>
using namespace std;
using namespace std;
Kitchen::Kitchen()
{
    Temperature *temperature = new Temperature();
    Pressure *pressure= new Pressure();
    Humidity *humidity= new Humidity();
    sensors.push_back(temperature);
    sensors.push_back(pressure);
    sensors.push_back(humidity);
}
void Kitchen::createRoom()
{
    ifstream f("CreateRoom_kitchen.txt");
}
void Kitchen::readRoom()
{
    cout<<"Senzorii pentru camera Kitchen sunt: ";
    for(int i=0;i<sensors.size();i++)
    {
        cout<<sensors[i]->readSensor()<<" ";
    }
    cout<<endl;
}
void Kitchen::updateRoom()
{
    ofstream g("CreateRoom_kitchen.txt");
    for(int i=0;i<sensors.size();i++)
    {
        g<<sensors[i]->readSensor()<<" ";
    }
    g<<endl;
}
void Kitchen::deleteRoom()
{
    remove("CreateRoom_kitchen.txt");
}
