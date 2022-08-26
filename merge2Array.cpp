#include <iostream>
using namespace std;
// merge 2 array avoiding the similar elements 
int merge2Array(int *a,int *b,int *c,int n)
{
    int i=0,j=0,k=0;
    bool flag1,flag2;
    flag1=flag2=false;
    while(i < n && j < n)
    {
        if(a[i] < b[j])
            if(a[i] != c[k-1])
                c[k++]=a[i++];
            else
                i++;
        else
            if(b[j] != c[k-1])    
                c[k++]=b[j++];
            else
                j++;
        if(i == n)
            flag1 = true;
        if(j == n)
            flag2 = true;
    }
    if(flag1)   
        while(j <n)
            c[k++]=b[j++];
    if(flag2)
        while(i <n)
            c[k++] = a[i++];
    return k;

}
void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void inputArray(int a[],int n)
{
    for(int i=0; i<n; i++)
        cin>>a[i];
}
int main()
{
    int n;
    cout<<"Enter the size of 2 array:\n";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements of 1st array in non decreasing order :\n";
    inputArray(a,n);
    cout<<"Enter the elements of 2nd array in non decreasing order :\n";
    inputArray(b,n);
    cout<<"printing the elements of 1st array :\n";
    printArray(a,n);
    cout<<"printing the elements of 2nd array :\n";
    printArray(b,n);
    int t = 2*n;
    int c[t];
    int k = merge2Array(a,b,c,n);
    cout<<"printing the elements of the new merged array:\n";
    printArray(c,k);
    return 0;
}