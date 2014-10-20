#include <iostream>

using namespace std;

int main()
{
    int arr[10]={4,5,4,5,4,5,4,4,4,2};
    int count[10] = {0,0,0,0,0,0,0,0,0};
    int max = -1;
    int ele;

    for(int i=0; i<10 ;i++)
    {
        for(int j=0; j<10; j++)
        {
          if(arr[j]==i) count[i]++;
        }
    }
    for(int i=0; i<10 ;i++)
    {
       if(count[i]>max) {max = count[i];ele=i; }
    }


    cout<<"\nMax occuring element "<<ele<<" with frequency of "<<max;
}
