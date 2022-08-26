#include <iostream>
using namespace std;

void selectionSort(int *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j <n; j++)
        {
            if(a[i]>a[j])
                swap(a[i],a[j]);
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
    selectionSort(a,n);
    cout<<"the elements in non decreasing order using selection Sort will be :\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}