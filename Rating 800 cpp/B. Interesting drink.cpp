#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    long long int i,n,x,q,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cin>>q;
    while(q--)
    {
        cin>>m;
         auto total= upper_bound(v.begin(), v.end(), m);

        cout<<total-v.begin()<<endl;
    }

    return 0;
}
