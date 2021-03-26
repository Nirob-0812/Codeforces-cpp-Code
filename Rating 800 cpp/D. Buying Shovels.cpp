#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,k,m,s,l;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<"1"<<endl;
        }
        else
        {
        s=sqrt(n);
        m=min(s,k);
        for(int i=1;i<=m;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(n/i<=k)
                    v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        cout<<n/v[v.size()-1]<<endl;
        }

    }

    return 0;
}
