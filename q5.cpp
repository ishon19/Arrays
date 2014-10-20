#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char arr[]="happydiwali";
    int char_count[256];
    char result[strlen(arr)];
    memset(char_count , 0 , sizeof(char_count));

    for(int i=0 ; arr[i]; ++i)
    {
        ++char_count[arr[i]];
    }

    for(int i=0; i<=255; ++i)
    {
        char_count[i]+=char_count[i-1];
    }

    for(int i=0; arr[i]; ++i)
    {
        result[char_count[arr[i]]-1] = arr[i];
        --char_count[arr[i]];
    }

    for(int i=0; arr[i]; ++i)
    {
        arr[i] = result[i];
    }

    cout<<"\n Sorted Array is: ";

     for(int i=0; i<=strlen(arr); ++i)
    {
        cout<<arr[i];
    }
}
