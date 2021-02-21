#include<iostream>
using namespace std;
int main()
{
    int strength,n,c=0,d;
    int x[10000],y[10000];
    cin>>strength>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(x[i]>x[j])
        {
            swap(x[i],x[j]);
            swap(y[i],y[j]);
        }
    }
    for(int i=0;i<n;i++)
        if(strength>x[i])
           strength=strength+y[i];
    else
    {
        cout<<"NO"<<endl;
        goto nirob;
    }
        cout<<"YES"<<endl;
        nirob:
        return 0;
}
