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

    ll n,sum;
    cin>>n;
    if(n%2)
    cout<<"0"<<endl;
    else
    {
        sum=pow(2,(n/2));
        cout<<sum<<endl;
    }


return 0;
}

