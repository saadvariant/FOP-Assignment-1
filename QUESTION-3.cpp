#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter any number: ";
    cin >> x;
    if (x > 10 && x <= 20)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0";
    }
}