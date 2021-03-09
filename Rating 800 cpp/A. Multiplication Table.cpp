#include<iostream>
using namespace std;
int main()
{
    long long int i,j,n,x,mul,c=0,m;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        m=x/i;
        if(x%i==0 && m<=n)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
