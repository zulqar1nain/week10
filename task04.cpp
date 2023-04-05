#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter array size: ";
    cin>>size;
    int numbers[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"Enter number: ";
        cin>>numbers[idx];
    }
}