#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,sum=0,max1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    max1=v[n-1];
    for(int i=n-1;i>=0;i--)
    {
        sum=sum+(max1-v[i]);
    }
    cout<<sum<<endl;
}
