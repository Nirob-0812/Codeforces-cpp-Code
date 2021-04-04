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
        ll n,a,c=1,cnt,tem;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        getfor(i,n-1)
        {
            if(v[i]>v[i+1])
            { 
              c++; 
            }
        }
        if(c==n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        v.clear();
        c=1;

    }
    


return 0;
}

