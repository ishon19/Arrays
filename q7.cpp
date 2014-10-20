#include<iostream>

using namespace std;

int main()
{
    int arr[50],size,num1 ,num2;
    int aux[20];
    int distance = 0, min=-1;
    cout<<"\n Enter Array size: ";
    cin>>size;
    cout<<"\n Enter Elements: ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Input Array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
    }

    cout<<"\n Enter The Two numbers whose distances are to be determined: ";
    cin>>num1>>num2;

    for(int i=0; i<size; i++)
    {
        if(arr[i] == num1)
        {
            for(int j=i+1,k=0;j<size;j++,k++)
            {
              if (arr[j]!=num2) {++distance;}
              else{
              cout<<"\nMinimum Distance "<<distance;break;

              }
              }

             }

       }
    }


