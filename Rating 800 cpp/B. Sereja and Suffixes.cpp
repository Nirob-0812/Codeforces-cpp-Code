#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    set<int> s;
    vector<int> v;
    int n,m,i;
    cin>>n>>m;
    int a,l;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(i=n-1;i>=0;i--)
    {
        s.insert(v[i]);
        v[i]=s.size();
    }
    while(m--)
    {
        cin>>l;
        cout<<v[l-1]<<endl;
    }

    return 0;
}
