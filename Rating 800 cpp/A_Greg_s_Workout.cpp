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
#define getfor(i,n) for(int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    vi v;
    int n,a,chest=0,biceps=0,back=0,p=0,q=1,r=2;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    getfor(i,n)
    {
        if(i==p)
        {
            chest=chest+v[i];
            p=p+3;
        }
        if(i==q)
        {
            biceps=biceps+v[i];
            q=q+3;
        }
        if(i==r)
        {
            back=back+v[i];
            r=r+3;
        }
    }
    int mx=max(max(chest,biceps),back);
    if(mx==chest)
    cout<<"chest"<<endl;
    else if(mx==biceps)
    cout<<"biceps"<<endl;
    else
    cout<<"back"<<endl;



return 0;
}

