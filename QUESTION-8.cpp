#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "How many elements you want to add in array: ";
    int x, y;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "Enter the number you want to add: ";
        cin >> y;
        arr[size + i] = {y};
    }
    cout << "After adding numbers the loop is: ";
    for (int j = 0; j < 5 + x; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
