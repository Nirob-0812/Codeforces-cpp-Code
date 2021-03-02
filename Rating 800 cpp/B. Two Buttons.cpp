#include<iostream>
using namespace std;
int main()
{
    int n,m,div,c=0,sum=0;
    cin>>n>>m;
    if(n>m)
    {
        cout<<n-m<<endl;
        return 0;
    }
    else if(n==m)
    {
        cout<<"0"<<endl;
    }
    while(true)
    {
        if(m%2==0)
        {
            m=m/2;
            c++;
        }
        else
        {
            m=(m+1)/2;
            c=c+2;
        }
        if(n>=m)
        {
            cout<<c+n-m<<endl;
            return 0;
        }
    }

}
