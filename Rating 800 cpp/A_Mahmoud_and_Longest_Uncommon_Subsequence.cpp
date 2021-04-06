#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long int
#define pb push_back 
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());
 
 
int main()
{
    int c=0,ans=0;
    string str1,str2;
    cin>>str1>>str2;
    if(str1.size()==str2.size() && str1==str2)
    cout<<"-1"<<endl;
    else if(str1.size()==str2.size() && str1!=str2)
    cout<<str1.size()<<endl;
    else
    cout<<max(str1.size(),str2.size())<<endl;
 
 
 
return 0;
}