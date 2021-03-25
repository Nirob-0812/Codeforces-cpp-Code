#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long long int> v;
    long long int i,n,a,sum,tem;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sum=v[0];
    cout<<v[0]<<" ";
    for(i=1;i<n;i++)
    {
        if(v[i]<0)
        {
            cout<<sum+v[i]<<" ";
        }
        else
        {
            sum=sum+v[i];
            cout<<sum<<" ";
        }

    }

    return 0;
}
