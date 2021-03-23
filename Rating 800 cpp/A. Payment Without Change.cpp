#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,s,div,rem,sub;
        cin>>a>>b>>n>>s;
        div=s/n;
        sub=s-(a*n);
        rem=s%n;
        if(n*a==s || b>=s || a>=div && b>=rem)
            cout<<"YES"<<endl;
        else if((a*n)<s && b>=sub)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
