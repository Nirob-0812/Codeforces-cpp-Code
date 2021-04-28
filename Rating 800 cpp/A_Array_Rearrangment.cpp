#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    testcase
    {
        bool ok=false;
        vi v;
        vi v1;
        ll n,k,a,b;
        cin>>n>>k;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        getfor(i,n)
        {
            cin>>b;
            v1.pb(b);
        }
        sort(v.begin(),v.end());
        sort(v1.rbegin(),v1.rend());
        getfor(i,n)
        {
            if(v[i]+v1[i]>k)
            {
                ok=true;
                break;
            }
        }
        if(ok)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }


return 0;
}

