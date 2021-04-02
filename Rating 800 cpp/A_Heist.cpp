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
#define getfor(i,n) int i; for(i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end()); 

int main()
{
    vector<int> v;
    int n,a;
    cin>>n;
    getfor(i,n)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int s=(v[n-1]+1)-v[0];
    cout<<s-v.size()<<endl;
    
}