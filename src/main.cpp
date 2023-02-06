#include <iostream>
#include "temperaturecontrollerapi.h"

using namespace std;

int main()
{
    float minTemp,maxTemp;
    cout<<"enter the minTemp..."<<endl;
    cin>>minTemp;
    cout<<"enter the maxTemp..."<<endl;
    cin>>maxTemp;
    TemperatureControllerAPI::controlTemperature(minTemp, maxTemp);
    return 0;
}