#include<bits/stdc++.h>
using namespace std;
vector<int> vi;
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
        int n,a,sum=0;
        cin>>n;
        getfor
        {
            cin>>a;
            if(a==0)
            vi.push_back(a);
            sum=sum+a;
        }
        if(sum==(vi.size()-(vi.size()*2)))
        cout<<vi.size()+1<<endl;
        else if(sum==0 && vi.size()==0)
        cout<<"1"<<endl;
        else if(vi.size()>=1)
        cout<<vi.size()<<endl;
        else 
        cout<<"0"<<endl;
        vi.clear();
        sum=0;

    }
    
}