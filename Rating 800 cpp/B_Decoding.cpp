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
    vc v;
    vc v1;
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<n;i++)
    {
        if(i%2)
        v.pb(str[i]);
        else
        v1.pb(str[i]);
    }
    if(n%2)
    {
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<str[0];
        for(int i=0;i<v1.size();i++)
        cout<<v1[i];
        cout<<endl;
    }
    else
    {
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        cout<<v1[i];
        cout<<str[0];
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<endl;

    }


return 0;
}

