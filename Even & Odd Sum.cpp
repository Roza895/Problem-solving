#include <iostream>
using namespace std;
int main()
{
    int evensum = 0;
    int oddsum = 0;
    for(int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            evensum += i;
        }
        else
        {
         oddsum += i;
        }
    }
    cout << "sum of even numbers between 1 and 50: " << evensum << endl;
    cout << "sum of odd numbers between 1 and 50: " << oddsum << endl;
    return 0;
 }
