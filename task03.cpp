#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter arr size: ";
    cin >> size;
    int arrsize[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arrsize[idx];
    }
    int found[20];
    int count = 0;
    
    for (int idx = 1; idx < size - 1; idx++)
    {
        if (arrsize[idx] > arrsize[idx - 1] && arrsize[idx] > arrsize[idx + 1])
        {
            found[count] = arrsize[idx];
            count++;
        }
    }
    if (count != 0)
    {
        for (int idx = 0; idx < count; idx++)
        {
            cout << found[count] << " ";
        }
    }
    else
    {
        cout << "Does not";
    }
}