#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"Sum of natural numbers till "<<n<<" is "<<sum;
    return 0;
}
