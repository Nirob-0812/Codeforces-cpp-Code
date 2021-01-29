#include<iostream>
using namespace std;
int main()
{
    long long i,n,sum=0,sub=0,sum1;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
    cout<<(n/2+n%2)*-1<<endl;
    return 0;
}
