#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long int
#define pb push_back 
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        vi v;
        ll n,a,c=0,ans=0,mn,p=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
        mn=1000000;
        for(int i=n-1;i>=0;i--)
        {
            if(mn<v[i])
                c++;
            mn=min(mn,v[i]);
        }
        cout<<c<<endl;
        }
        v.clear();
        c=0;

    }


return 0;
}

