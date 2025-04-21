#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is from vehicle class" << endl;
    }
};
class fourwheeler: public vehicle
{
public:
    fourwheeler()
    {
        cout << "This is from fourwheeler class" << endl;
    }
};
class car: public fourwheeler
{
 public:
     car()
     {
         cout << "This is from car class" << endl;
     }
};
int main()
{
    car obj;
    return 0;
}

