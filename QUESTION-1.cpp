#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter a number: ";
    cin >> x;
    for (int a = 1; a <= x; a++)
    {
        if (x % a == 0)
        {
            cout << a << " ";
        }
    }
    cout << endl;
}
