#include <iostream>
using namespace std;

// this is using hash map technique or hashing done within O(n)
void countFrequencyBetter(int *a, int n)
{
    // assuming the largest element in the array will be 10000
    int f[10000]={0};
    for(int i=0; i<n;i++)
        f[a[i]]++;
    for(int i =0; i< 10000 && n; i++){
        if(f[i]){
            cout<<i<<" = "<<f[i]<<endl;
            n--;
        }
    }
    // REM: THIS CONCEPT OF MAKING FREQUENCY ARRAY AS THIS CAN BE USED TO SOLVE MULTIPLE PROBLEMS
    // NOTE: WE CAN USE THIS FREQUENCY ARRAY TO PRINT THE UNIQUE ELEMENTS IN THE ARRAY 
    // NOTE: WE CAN USE THIS TO PRINT THE DUPLICATE ELEMENTS IN THE ARRAY 
    // 1 DRAWBACK IS CAN'T STORE NEGATIVE NO DIRECTLY , BUT CAN BE MANAGED BY STORING MULTIPLE
    // NO BY MULTIPLYING THEM WITH -2 AND STORING THEM 
} 

// this is the naive approach using o(n*n)
void countFrequency(int *a,int n)
{
    int f[n]={0};
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j <n ; j++)
        {
            if(a[i] == a[j])
                c++;
        }
        f[i]=c;
    }
    for(int i =0; i<n; i++)
        cout<<i<<" = "<<f[i]<<endl;

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
    cout<<"Enter the size of array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of 1st array :\n";
    inputArray(a,n);
    cout<<"the elements of the array are :\n";
    printArray(a,n);
    // countFrequency(a,n);
    countFrequencyBetter(a,n);
    return 0;
}