#include <iostream>
using namespace std;
int main()
{
    cout << "Even numbers between 1 and 50:" << endl;
    for (int i = 2; i <= 50; i += 2)
    {
      cout << i << " ";
    }
      cout << endl;
    cout << "\nOdd numbers between 1 and 50:" << endl;
    for (int i = 1; i <= 50; i += 2)
    {
      cout << i << " ";
    }
    cout << endl;
    return 0;
}
