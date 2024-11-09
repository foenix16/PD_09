#include <iostream>
using namespace std;
main()
{
    int size;
    bool result = false;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> number[i];
    }
    int digit;
    for (int idx = 0; idx < size; idx++)
    {
        if (number[idx] >= 9)
        {
            while (number[idx] != 0)
            {
                digit = number[idx] % 10;
                number[idx] = number[idx] / 10;
                if (digit == 7)
                {
                    result = true;
                    break;
                }
            }
         }
            else if (number[idx] == 7)
            {
                result = true;
                break;
            }
    }
    if (result == true)
    {
        cout << "BOMB!";
    }
    else
    {
        cout << "there is no 7 in the array";
    }
}
