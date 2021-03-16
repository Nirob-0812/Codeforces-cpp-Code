#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,n,div,div1;
    cin>>a>>b>>n;
    while(1)
    {
        n=n-__gcd(a,n);
        if(n==0)
        {
            cout<<"0"<<endl;
            return 0;
        }
        n=n-__gcd(b,n);
        if(n==0)
        {
            cout<<"1"<<endl;
            return 0;
        }
    }
}

