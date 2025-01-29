#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int r = year%4;
    if (r == 0)
    {
        cout<<"leap year"<<endl;
    }
    else
    {
        cout<<"not leap year"<<endl;
    }
    return 0;
}
