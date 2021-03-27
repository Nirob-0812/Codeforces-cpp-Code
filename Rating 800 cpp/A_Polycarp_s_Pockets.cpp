#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,c=1,ans=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
        {
            c++;
        }
        else
        {
           ans=max(ans,c);
           c=1;
        }
    }

    cout<<ans<<endl;
}