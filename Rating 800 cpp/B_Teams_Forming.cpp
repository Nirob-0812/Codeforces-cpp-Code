#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,sub,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        sub=abs(v[i]-v[i+1]);
        sum=sum+sub;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}