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
        ll a,b,c,s,d;
        cin>>a>>b>>c;
        s=a+b+c;
        d=s/9;
        if(s%9==0 && d<=a && d<=b && d<=c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


return 0;
}

