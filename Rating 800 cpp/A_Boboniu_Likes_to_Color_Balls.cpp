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
#define sort_array sort(v.begin(),v.end()); 

int main()
{
    testcase
    {
        int r,g,b,w,c=0;
        cin>>r>>g>>b>>w;
        if(r%2==1) c++;
        if(g%2==1) c++;
        if(b%2==1) c++;
        if(w%2==1) c++;
        if(c==0 || c==1)
        cout<<"Yes"<<endl;
        else if((c==3 || c==4) && r>0 && g>0 && b>0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }
    
    return 0;
}