#include <iostream>

using namespace std;

int main()
{
    int arr1[]={1,2,5,6,7,8,9};
    int arr2[]={0,1,2,4,6,8};

    for(int i=0,j=0; i<7,j<7;)
    {
           if(arr1[i]<arr2[j]) i++;
           if (arr1[i]>arr2[j]) j++;
           if(arr1[i] == arr2[j])
           {
               cout<<"\n Element Found: "<<arr1[i];
               i++;j++;
           }
    }

}
