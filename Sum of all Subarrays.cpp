#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
    
   return 0; 
}    
