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
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    if(a+b==c+d || a+c==b+d || a+d==b+c || a+b+c==d || b+c+d==a || c+d+a==b || d+a+b==c)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


return 0;
}

