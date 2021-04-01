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
        int n,div;
        cin>>n;
        if(n==3)
        {
            cout<<"7"<<endl;
        }
        else
        {
            if(n%2==0)
            {
                div=n/2;
            }
            else
            {
                div=(n/2);
                div=div-1;
            }
            if(n%2==1)
            cout<<"7";
            for(int i=0;i<div;i++)
            {
                cout<<"1";
            }
            cout<<endl;

        }
    }

    return 0;
    
}