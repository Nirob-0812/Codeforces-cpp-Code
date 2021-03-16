#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,m,a,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        if(v[i]<0)
        sum=sum+abs(v[i]);
    }
    cout<<sum<<endl;

    return 0;
}
