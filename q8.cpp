#include <iostream>

using namespace std;

int main()
{
    int arr1[]={1,7,8,11,17,0,0,0,0,0};
    int arr2[]={1,2,3,18,23};
    int biggie[15];

    for(int i=0,j=0,k=0;i<15,j<5,k<15;k++)
    {
        //if(arr1[i] == 0||arr2[j] == 0) {i++;j++;continue;}
        if(arr1[i]<arr2[j]){biggie[k]=arr1[i];i++;}
        if(arr1[i]>arr2[j]){biggie[k]=arr2[j];j++;}
        if(arr1[i]==arr2[j]){biggie[k] = arr1[i];biggie[k+1] = arr2[j]; i++;j++;}

    }

    cout<<"\n The Sorted Array is: ";

    for(int i=0; i<15; i++)
    {
        cout<<biggie[i]<<"\n";
    }

}
