#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// WAP to print all the unique elements of the array

void printUnique(int *a, int n)
{
    bool b[n] = {false};
    for(int i=0; i<n-1; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(a[i] == a[j])
                b[j]= true;
        }
    }
    for(int i=0; i <n; i++)
        if(b[i] ==0)
            cout<<a[i]<<" ";

}
void inputArray(int a[],int n)
{
    for(int i=0; i<n; i++)
        cin>>a[i];
}

void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int n,n1;
    cout<<"Enter the size of array:\n";
    cin >>n;
    int a[n];
    cout<<"Enter the elements of array:\n";
    inputArray(a,n);

    cout<<"the array elements are :\n";
    printArray(a,n);

    cout<<"printing the unique array elements :\n";
    printUnique(a,n);

}