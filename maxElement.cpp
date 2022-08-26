#include <iostream>
// #include <math.h>
#include <cmath>
#include <limits.h>
using namespace std;

void input(int *a,int n)
{
    cout<<"Enter the elements of array :\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
}

int maximum(int *a, int n)
{
    int max =  INT_MIN;
    for(int i=0; i<n; i++)
        if(max < a[i])
            max =a[i];
    return max;
}
int main()
{
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int a[n];
    int *pa = new int(n);
    input(a,n);
    input(pa,n);
    int max1 =maximum(a,n); 
    cout<<"the maximum element in the array created at stack frame is "<<max1<<endl;
    int max2 =maximum(pa,n);
    cout<<"the maximum element in the array created at heap memory is "<<max2<<endl;
    return 0;
}