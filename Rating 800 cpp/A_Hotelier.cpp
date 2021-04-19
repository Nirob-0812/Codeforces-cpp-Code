#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    char s;
    ll n,a[10]={0,0,0,0,0,0,0,0,0,0},p=0,k=9;
    cin>>n;
    getfor(i,n)
    {
        cin>>s;
        if(s=='L')
        {
            for(int p=0;p<10;p++)
            {
                if(a[p]==0)
                {
                    a[p]=1;
                    break;
                }
            }
        }
        else if(s=='R')
        {
            for(int k=9;k>=0;k--)
            {
                if(a[k]==0)
                {
                    a[k]=1;
                    break;
                }
            }
        }
        else if(s=='0')
        a[0]=0;
        else if(s=='1')
        a[1]=0;
        else if(s=='2')
        a[2]=0;
        else if(s=='3')
        a[3]=0;
        else if(s=='4')
        a[4]=0;
        else if(s=='5')
        a[5]=0;
        else if(s=='6')
        a[6]=0;
        else if(s=='7')
        a[7]=0;
        else if(s=='8')
        a[8]=0;
        else if(s=='9')
        a[9]=0;
    }
    for(int i=0;i<10;i++)
    cout<<a[i];
    cout<<endl;
    
    


return 0;
}

