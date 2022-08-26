#include <iostream>
using namespace std;
// best approach to rotate array in O(n) using hcf of total elements and no of elements to be rotated 

int gcd(int a, int b)
{
    int max = (a>b)?a:b;
    int min = (a+b)-max;
    if(min == 0)
        return max;
    else
        return gcd(max%min,min);
}
void rotateArrayRight(int *a,int n,int n1)
{
    int hcf = gcd(n,n1);
    int k = n/hcf;
    // k is the no of sets in which we have divided n 
    for(int i=0; i < hcf; i++)
    {
        int temp = a[n-n1+i],j = k;
        while(j--)
        {
            
        }
        a[i]=temp;
    }
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

     cout<<"Enter the position by which you want to rotate the array leftwards:\n";
    cin>>n1;
    rotateArrayRight(a,n,n1);

    cout<<"printing the array after leftrotation :\n";
    printArray(a,n);

}