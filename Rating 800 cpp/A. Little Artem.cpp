#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sub,mul,b;
        cin>>n>>m;
        int w=m;
        for(int i=1;i<=n*m;i++)
        {
            if(i==1)
            {
                cout<<"W";
            }
            else
            cout<<"B";
            if(i==w)
            {
                cout<<endl;
                w=w+m;
            }
        }
        /*sub=(m*n)-(m*(n-1));
        if(sub%2==1)
        {
            for(int i=0;i<(sub/2)+1;i++)
            {
                    cout<<"B";
            }
            for(int i=0;i<(sub/2);i++)
            {
                    cout<<"W";
            }
            cout<<endl;

        }
        else if(sub%2==0)
        {
            for(int i=0;i<(sub/2)+1;i++)
            {
                    cout<<"B";
            }
            for(int i=0;i<(sub/2)-1;i++)
            {
                    cout<<"W";
            }
            cout<<endl;

        }
        */

    }

    return 0;
}
