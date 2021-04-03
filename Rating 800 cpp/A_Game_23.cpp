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
    int n,m,c=0,div;
    cin>>n>>m;
    if(m%n==0 && m/n==1)
    cout<<"0"<<endl;
    else if(m%n==0 && m/n>1)
    {
        div=m/n;
        while(div)
        {
            if(div==1)
            {
                cout<<c<<endl;
                break;
            }
            if(div%2!=0)
            {
                if(div%3!=0)
                {
                    cout<<"-1"<<endl;
                    break;
                }
                else
                {
                    div=div/3;
                    c++;
                }
            }
            else
            {
            div=div/2;
            c++;
            }

        }

    }
    else
    cout<<"-1"<<endl;

    return 0;
    
}