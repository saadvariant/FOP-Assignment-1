#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive integer: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "Please enter a positive integer greater than 1." << endl;
        return 1;
    }
    int x = n - 1;
    while (x > 1)
    {
        bool isPrime = true;
        for (int a = 2; a * a <= x; ++a)
        {
            if (x % a == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << "Largest prime number less than or equal to " << n << " is "
                 << x << endl;
            break;
        }
        --x;
    }
    return 0;
}