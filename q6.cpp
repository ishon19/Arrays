#include<iostream>

using namespace std;

int main()
{
    int arr[5][5],rows,cols;
    cout<<"\n Enter number of rows in matrix(1-5): ";
    cin>>rows;
    cout<<"\n Enter the number of columns in matrix(1-5): ";
    cin>>cols;
    cout<<"\n Enter the elements: ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"\n The Entered Matrix is: \n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n The Transpose of this Matrix is: \n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j]=arr[j][i];
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}
