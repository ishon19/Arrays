#include <iostream>

using namespace std;

int main()
{
    int arr[10]={2,3,5,6,7,3,5,6,3,4};
    int rev[10];

    for(int i=0; i<10; i++)
    {
        cout<<"\n"<<arr[i];
    }
    cout<<"\n";
    for(int i=9; i>=0; i--)
    {
        rev[9-i] = arr[i];
    }
     for(int i=0; i<10; i++)
    {
        cout<<"\n"<<rev[i];
    }
    return 0;
}


