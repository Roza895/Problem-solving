#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class fare
{
public:
   fare()
   {
       cout<<"fare of vehicle\n";
   }
};
class car: public vehicle
{

};
class bus: public vehicle, public fare
{

};
int main()
{
    bus obj2;
    return 0;
}

