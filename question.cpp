#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
// Abstract base class with a virtual function
class SmartDevice
{
protected:
    string device_ID;

public:
    SmartDevice(string ID) : device_ID(ID) {}
    virtual void displayInfo() = 0; // Pure virtual function
};
// Derived class 1: SmartLight
class SmartLight : public SmartDevice
{
private:
    int brightness;

public:
    SmartLight(string ID, int bright) : SmartDevice(ID), brightness(bright) {}
    void displayInfo() override
    {
        cout<<"Smart Device Details :"<<endl;
        cout<<"Device ID :"<<device_ID<<endl;
        cout<<"Brightness Level :"<<brightness<<"%"<<endl<<endl;
    }
};
// Derived class 2: SmartLock
class SmartLock : public SmartDevice
{
private:
    string lock_status;

public:
    SmartLock(string ID, string status) : SmartDevice(ID), lock_status(status) {}
    void displayInfo() override
    {
        cout<<"Smart Device Details :"<<endl;
        cout<<"Device ID :"<<device_ID <<endl;
        cout<<"Lock Status :"<<lock_status<<endl<<endl;
    }
};

// Derived class 3: SmartThermostat
class SmartThermostat : public SmartDevice
{
private:
    int temperature;

public:
    SmartThermostat(string ID, int temp) : SmartDevice(ID), temperature(temp) {}
    void displayInfo() override
    {
        cout<<"Smart Device Details :"<<endl;
        cout<<"Device ID :"<<device_ID<<endl;
        cout<<"Current Temperature :"<<temperature<<"°C"<<endl<<endl;
    }
};
// Driver function
int main()
{
    int N;
    cin>>N;
    SmartDevice *devices[N];
    for (int i = 0; i <N; i++)
    {
        string device_type, device_ID;
        cin>>device_type>>device_ID;
        if (device_type == "Light")
        {
            int brightness;
            cin>>brightness;
            devices[i] = new SmartLight(device_ID, brightness);
        }
        else if (device_type == "Lock")
        {
            string lock_status;
            cin>>lock_status;
            devices[i] = new SmartLock(device_ID, lock_status);
        }
        else if (device_type == "Thermostat")
        {
            int temperature;
            cin>>temperature;
            devices[i] = new SmartThermostat(device_ID, temperature);
        }
    }
    for (int i = 0; i<N; i++)
    {
        devices[i]->displayInfo();
        delete devices[i]; // Free allocated memory
    }
    return 0;
}