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
    ll y,b,r,m;
    cin>>y>>b>>r;
    m=min(min(y,b),r);
    if(m==r)
    cout<<(r*3)-3<<endl;
    else if(m==b)
    cout<<b*3<<endl;
    else if(m==y && y+2<=r)
    cout<<(y*3)+3<<endl;
    else
    cout<<y*3<<endl;


return 0;
}

