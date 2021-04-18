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
    vi v;
    ll n,k,a,c=0;
    cin>>n>>k;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>k)
        break;
        else
        c++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]>k)
        break;
        else
        c++;
    }
    if(c>n)
    cout<<c-n<<endl;
    else
    cout<<c<<endl;


return 0;
}

