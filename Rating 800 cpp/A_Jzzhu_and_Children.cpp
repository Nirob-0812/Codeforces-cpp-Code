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
    int n,m,ix,a,c=0,d,mx=0;
    cin>>n>>m;
    getfor(i,n)
    {
        cin>>a;
        d=a/m;
        if(d*m!=a)
        d=d+1;
        if(d>=mx)
        {
            ix=i;
            mx=d;
            c++;
        }
    }
    if(c==0)
    cout<<n<<endl;
    else
    cout<<ix+1<<endl;


return 0;
}

