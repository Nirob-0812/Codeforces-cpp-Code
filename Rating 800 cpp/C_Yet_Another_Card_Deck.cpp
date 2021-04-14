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
    ll n,q,k[51]={},a,b;
    cin>>n>>q;
    getfor(i,n)
    {
        cin>>a;
        if(k[a]==0)
        k[a]=i+1;
    }
    while(q--)
    {
        cin>>a;
        cout<<k[a]<<" ";
        for(int i=1;i<51;i++)
        {
            if(k[i]<k[a])
            k[i]++;
        }
        k[a]=1;
    }
    cout<<endl;


return 0;
}

