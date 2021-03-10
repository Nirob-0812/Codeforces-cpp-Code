#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,n,m,i;
        cin>>x>>n>>m;
        if(x<=10 && m>=1 && n>=0)
        {
            cout<<"YES"<<endl;
        }
        else if(x>10)
        {
        for(i=0;i<n;i++)
        {
            x=(x/2)+10;
        }
        for(i=0;i<m;i++)
        {
            x=x-10;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
