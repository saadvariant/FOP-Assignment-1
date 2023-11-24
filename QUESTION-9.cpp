#include <iostream>
using namespace std;
int main()
{
    int num, ele, tochk, sum;
    cout << "Enter the number of elements in array: ";
    cin >> num;
    int arr[num] = {};
    for (int i = 0; i < num; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    cout << "The array is: ";
    for (int j = 0; j < num; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    cout << " Enter the number to check the sum ";
    cin >>
        tochk;
    cout << "The triplets are: \n";
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            sum = arr[i] + arr[j];
            for (int k = j + 1; j < num; j++)
            {
                sum += arr[k];
                if (sum == tochk)
                {
                    cout << "( " << arr[i] << " , " << arr[j] << " , " << arr[k]
                         << ") \n";
                }
            }
        }
    }
    return 0;
}
