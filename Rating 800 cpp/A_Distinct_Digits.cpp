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
    set<int> s;
    int a,b,c=0,cnt=0,res,n,rem,p;
    cin>>a>>b;
    n=a;
    while(1)
    {
        p=n;
        while(p!=0)
        {
            c++;
            rem=p%10;
            s.insert(rem);
            p=p/10;

        }
        if(s.size()==c)
        {
            cnt=1;
            res=n;
            break;
        }
        else
        {
            c=0;
            s.clear();
        }
        n++;
        if(n>b)
        {
            break;
        }
    }

    if(cnt==1)
    {
        cout<<res<<endl;
    }
    else
    cout<<"-1"<<endl;
    
}