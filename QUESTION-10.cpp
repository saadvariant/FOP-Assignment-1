#include <iostream>
using namespace std;
int main()
{
    int ele = 5;
    int arr[ele] = {};
    for (int i = 0; i < ele; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    cout << "The sorted array in ascending order is: ";
    for (int j = 0; j < ele; j++)
    {
        for (int k = j + 1; k < ele; k++)
        {
            int toswap;
            if (arr[j] > arr[k])
            {
                toswap = arr[j];
                arr[j] = arr[k];
                arr[k] = toswap;
            }
        }
        cout << arr[j] << " ";
    }
    cout << endl;
    cout << "The sorted array in descending order is: ";
    for (int j = 0; j < ele; j++)
    {
        for (int k = j + 1; k < ele; k++)
        {
            int toswap;
            if (arr[j] < arr[k])
            {
                toswap = arr[j];
                arr[j] = arr[k];
                arr[k] = toswap;
            }
        }
        cout << arr[j] << " ";
    }
    return 0;
}