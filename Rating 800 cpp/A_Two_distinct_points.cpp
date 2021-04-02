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
         int l1,l2,r1,r2;
         cin>>l1>>l2>>r1>>r2;
         if(l1!=r2)
         cout<<l1<<" "<<r2<<endl;
         else if(l1==r2)
         cout<<l1<<" "<<r1<<endl;
     }
     return 0;
    
}