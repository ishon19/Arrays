#include <iostream>

using namespace std;

int main()
{
    int arr[10]={2,1,0,3,4,2,3,2,6,2};
    int possible[10];
    int x,sum=0;
    cout<<"\nEnter Value of x : ";
    cin>>x;

    for(int i=0; i<10; i++)
    {
         sum=0;
        if(arr[i]<=x)
        {
           possible[i]=arr[i];
             if(sum==0 && i>0)
             {
                 sum += possible[i-1]+possible[i];
                 if(sum == x)
                 {
                     cout<<"Pair Found: "<<possible[i-1]<<" and "<<possible[i]<<"\n";
                 }

             }

        }

    }


}
