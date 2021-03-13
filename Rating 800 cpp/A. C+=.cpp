#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,c=0;
        cin>>a>>b>>n;
        if(a<b)
        while(1)
        {
            a+=b;
            c++;
            if(a>n)
                break;
            b+=a;
            c++;
            if(b>n)
                break;
        }
        else
        while(1)
        {
            b+=a;
            c++;
            if(b>n)
                break;
            a+=b;
            c++;
            if(a>n)
                break;
        }
        cout<<c<<endl;
    }

    return 0;
}
