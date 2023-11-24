#include <iostream>
using namespace std;
int main()
{
    int x, y, z = 0;
    cout << "Enter the Dividend: ";
    cin >> x;
    cout << "Enter the Divisor: ";
    cin >> y;
    if (x > y)
    {
        for (int i = 1; x >= y; i++)
        {
            x = x - y;
            z++;
        }
        cout << z;
    }
    else
    {
        cout << "The divident must be greater than the divisor.";
    }
    return 0;
}
