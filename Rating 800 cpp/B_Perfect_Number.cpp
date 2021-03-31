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
    int n,v=0,tem,sum=0,c=0,rem;
    cin>>n;
    v=19;
    while(1)
    {
        tem=v;
        while(tem!=0)
        {
            rem=tem%10;
            sum=sum+rem;
            tem=tem/10;
        }
        if(sum==10)
        c++;
        if(c==n)
        {
            break;
        }
        v++;
        sum=0;
    }
    cout<<v<<endl;

    return 0;
    
}