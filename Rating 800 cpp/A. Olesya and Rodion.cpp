#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,t,power;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        if(t==10)
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<"1";
            }
            cout<<"0"<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
        }
    }
}
