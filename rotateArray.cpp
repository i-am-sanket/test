#include <iostream>
using namespace std;
// Write a function to rotate the array by n position towards left or anticlockwise

void reverseArray(int a[],int start ,int end)
{
    while(start < end)
    {
        int temp = a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void rotateArrayLeft(int* a, int n, int n1)
{
    reverseArray(a,0,n-1);
    reverseArray(a,0,n-n1-1);
    reverseArray(a,n-n1,n-1);
}

void rotateArrayRight(int* a,int n,int n2)
{
    reverseArray(a,0,n-1);
    reverseArray(a,0,n2-1);
    reverseArray(a,n2,n-1);
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
    int n,n1,n2;
    cout<<"Enter the size of array:\n";
    cin >>n;
    int a[n];
    cout<<"Enter the elements of array:\n";
    inputArray(a,n);

    cout<<"the array before rotation is :\n";
    printArray(a,n);

    cout<<"Enter the position by which you want to rotate the array leftwards:\n";
    cin>>n1;
    rotateArrayLeft(a,n,n1);

    cout<<"printing the array after leftrotation :\n";
    printArray(a,n);

    cout<<"Enter the position by which u want to rotate the array rightwards or clockwise:\n";
    cin>>n2;
    rotateArrayRight(a,n,n2);

    cout<<"printing the array after right Rotation:\n";
    printArray(a,n);

    return 0;
}