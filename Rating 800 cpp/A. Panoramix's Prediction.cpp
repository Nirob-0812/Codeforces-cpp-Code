#include<iostream>
using namespace std;
int main()
{
    int n,m,c=0,j;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j && j==n)
        {
            c++;
        }
        else if(i==j && j==m)
        {
            c++;
        }
        else if(i==j)
        {
            c--;
        }
    }
    if(c==2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
