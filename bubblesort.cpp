#include <iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
    // bubble sort for arranging the elements of array in non decreasing order
    for(int i =0; i<n-1; i++)
    {
        for(int j=0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    bubbleSort(a,n);
    cout<<"the elements in non decreasing order using bubble sort will be :\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}