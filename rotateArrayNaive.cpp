#include <iostream>
using namespace std;

// rotating the array using nested loop
// i.e rotating the first element n1 times
void rotateArrayLeft(int *a,int n,int n1)
{
    int i,j;
    for(i=0;i <n1; i++)
    {
        int temp = a[0];
        for(j = 0; j< n-1; j++)
            a[j]=a[j+1];
        a[j]= temp;
    }
}
// rotate array using another temp array
void rotateArrayLeft1(int *a, int n,int n1)
{
    int b[n];
    int k=0;
    for(int i =n1;i <n; i++)
        b[k++] = a[i];
    for(int j = 0; j <n1; j++)
        b[k++]= a[j];
    for(int i=0; i<n; i++)
        a[i]=b[i];
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

    cout<<"the array before rotation is :\n";
    printArray(a,n);

    // cout<<"Enter the position by which you want to rotate the array leftwards:\n";
    // cin>>n1;
    // rotateArrayLeft(a,n,n1);

    // cout<<"printing the array after leftrotation :\n";
    // printArray(a,n);

    cout<<"Enter the position by which you want to rotate the array leftwards:\n";
    cin>>n1;
    rotateArrayLeft1(a,n,n1);

    cout<<"printing the array after leftrotation :\n";
    printArray(a,n);

    return 0;
}