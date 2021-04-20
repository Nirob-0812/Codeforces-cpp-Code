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
    si s;
    vi v;
    ll n,a,sum=0,c=1;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        s.insert(a);
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            c++;
        }
        else
        c=1;
        sum=max(sum,c);
    }
    if(sum==0)
    cout<<"1"<<" "<<s.size()<<endl;
    else
    cout<<sum<<" "<<s.size()<<endl;



return 0;
}

