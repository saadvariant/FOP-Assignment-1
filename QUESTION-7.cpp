#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter a word: ";
    cin >> str1;
    int a = 0, b = 0;
    for (a = 0; a < str1.length(); a++)
    {
        for (b = 0; b < str1.length(); b++)
        {
            if (str1[a] == str1[b])
            {
                break;
            }
        }
        if (a == b)
        {
            str2 += str1[a];
        }
    }
    cout << "Your word without repetition is: ";
    cout << str2;
    return 0;
}