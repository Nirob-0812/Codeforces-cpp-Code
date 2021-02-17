#include<iostream>
using namespace std;
int main()
{
    int n,m,mul,j=1,s=1,r=2,k=3,l=4;
    cin>>n>>m;
    mul=n*m;

    for(int i=1;i<=mul;i++)
    {
        if(i==m*s+1){
        for(i=m*s+1;i<m*r;i++)
        {
            cout<<".";
            if(m*j==i)
        {
            cout<<endl;
            j++;
        }
        }
        r=r+4;
        s=s+4;
        }
        if(i==m*k+2)
        {
            for(i=m*k+2;i<=m*l;i++)
            {
                cout<<".";
                if(m*j==i)
        {
            cout<<endl;
            j++;
        }
            }
            k=k+4;
            l=l+4;
        }
        cout<<"#";
        if(m*j==i)
        {
            cout<<endl;
            j++;
        }


    }
}
