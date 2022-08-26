#include <iostream>
#include <limits.h>
using namespace std;
// WAP TO PRINT THE 2ND LARGEST ELEMENT OF ARRAY
int secondLargest(int* a, int n)
{
    int max1 =INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max1 < a[i])
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(max2 < a[i])
            max2 = a[i];
    } 
    return max2;
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
    int second_max = secondLargest(a,n);
    cout<<"the 2nd largest element of array is : "<<second_max<<endl;
    return 0;
}