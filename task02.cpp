#include <iostream>
using namespace std;
int numbers[10];
int checkcondition(int size);
main()
{
    int size;
    cout <<"Enter array size: ";
    cin>>size;
    int arrsize[size];
     checkcondition(size);

    for(int idx=0;idx<size;idx++)
    {
        cout <<"Enter week"  <<idx+1  <<": ";
        cin>>arrsize[idx];
    }
    int checkcondition(size);
    {
    int count=0;
    for(int x=0;x<size-1;x++)
    {
        if(arrsize[x+1]>arrsize[x])
        {
            count++;
        }
    }
    cout<<count;
}