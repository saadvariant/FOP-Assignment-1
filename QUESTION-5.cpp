#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter 1st string: ";
    cin >> str1;
    cout << "Enter 2nd string: ";
    cin >> str2;
    char change;
    if (str1 == str2)
    {
        cout << "Strings are equal, inverted string is: ";
        for (int i = 0; i < str2.length() / 2; i++)
        {
            change = str2[i];
            str2[i] = str2[str2.length() - 1 - i];
            str2[str2.length() - 1 - i] = change;
        }
        cout << str2;
    }
    else
        cout << "Strings are not equal";
    return 0;
}
