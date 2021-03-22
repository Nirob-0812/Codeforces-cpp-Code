#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,T,S;
        cin>>x>>y>>a>>b;
        T=max(x,y);
        S=min(x,y);
        if((T-S)%(a+b)==0)
        {
            cout<<(T-S)/(a+b)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
