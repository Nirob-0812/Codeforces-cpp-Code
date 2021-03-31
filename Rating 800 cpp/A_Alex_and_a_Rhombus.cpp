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
    int n,sum=1,s=1,c=2,res;
    cin>>n;
    if(n==1)
    cout<<"1"<<endl;
    else
    {
        while(1)
      {
        sum=sum+s*4;
        if(c==n)
        {
            res=sum;
            break;
        }
        else
        c++;
        s++;
      }
      cout<<res<<endl;
    }
     
    
}