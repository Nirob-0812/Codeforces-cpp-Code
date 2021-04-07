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
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    vi v;
    vi v1;
    int n,a,c=1;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    v1.pb(v[n-1]);
    for(int i=n-1;i>0;i--)
    {
        if(v[i]<=v[i-1])
        {
            c++;
            v1.pb(v[i-1]);
        }
    }
    reverse(v1.begin(),v1.end());
    cout<<c<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.clear();
    v.clear();
    c=0;


return 0;
}

