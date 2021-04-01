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
        int cnt=0,c=0,p=0,k=0;
        string str;
        cin>>str;
        if(str.size()%2==1 || str[0]==')' || str[str.size()-1]=='(')
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
             
    }

    return 0;
    
}