#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase int t; cin>>t; while(t--)
#define getfor int i; for(i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end()); 

int main()
{
    long long int t,s,x,div;
    cin>>t>>s>>x;
    if(t==x)
     cout<<"YES"<<endl;
    else if(t<x && s>x)
    cout<<"NO"<<endl;
    else if(t>x)
    cout<<"NO"<<endl;
    else if(x>=s+t)
    {
        div=(x-t)/s;
        if((div*s)+t==x || (div*s)+t+1==x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}