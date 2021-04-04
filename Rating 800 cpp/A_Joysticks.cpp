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

    int a,b,c=0;
    cin>>a>>b;
    if(a<2 && b<2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    while(1)
    {
        if(a>b)
        swap(a,b);
        b=b-2;
        a=a+1;
        c++;
        if(b==0 || a==0)
        break;
    }
    cout<<c<<endl;

return 0;
}

