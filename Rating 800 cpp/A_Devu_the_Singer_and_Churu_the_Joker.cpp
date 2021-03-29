#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a,d,div,sum=0,sub;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    if(sum+(10*(n-1))>d)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        sub=d-(sum+(10*(n-1)));
        div=sub/5;
    }
    cout<<((n-1)*2+div)<<endl;

    return 0;

}