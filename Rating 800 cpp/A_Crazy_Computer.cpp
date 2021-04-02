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
    int n,c,cnt=1,a;
    cin>>n>>c;
    getfor(i,n)
    {
        cin>>a;
        v.push_back(a);
    }
    getfor(i,n-1)
    {
        if(v[i+1]-v[i]<=c)
        cnt++;
        else
        cnt=1;
    }
    cout<<cnt<<endl;

    return 0;
    
}