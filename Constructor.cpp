#include <iostream>
using namespace std;

class prime
{
public:
    float res;
    prime()
    {
        res=0;
    }
    prime(int a, int b)
    {
        res=a*b;
    }
    prime(int a, int b, int c)
    {
        res=a*b*c;
    }
    void disp()
    {
        cout<<res<<endl;
    }
};
int main()
{
    prime o;
    prime o2(10, 20);
    prime o3(10, 20, 30);
    o.disp();
    o2.disp();
    o3.disp();
    return 0;
}
