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
    testcase
    {
        int x,y,mx;
        cin>>x>>y;
        if(x==y)
        cout<<x+y<<endl;
        else
        {
            mx=max(x,y);
            cout<<mx+(mx-1)<<endl;
        }
    }

    return 0;
    
}