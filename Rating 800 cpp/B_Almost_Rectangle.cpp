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
    testcase
    {
        vc s;
        int n,p,p1,k=0,m,m1,c=0,cnt=0;
        cin>>n;
        char str[n][n],ss,ss1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>str[i][j];
                if(str[i][j]=='*')
                {
                    if(k==0)
                    {
                        p=j;
                        m=i;
                        k=1;
                    }
                    if(k==1)
                    {
                        p1=j;
                        m1=i;
                    }

                }
            }
        }
        if(m==m1)
        {
            if(m+1<n)
            {
                str[m+1][p]='*';
                str[m1+1][p1]='*';
            }
            else
            {
                str[m-1][p]='*';
                str[m1-1][p1]='*';

            }
        }
        if(p==p1)
        {
            if(p+1<n)
            {
                str[m][p+1]='*';
                str[m1][p1+1]='*';
            }
            else
            {
                str[m][p-1]='*';
                str[m1][p1-1]='*';

            }
        }
        else
        {
            str[m][p1]='*';
            str[m1][p]='*';
        }
    
        for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
                cout<<str[i][j];
           }
           cout<<endl;
        }
    }


return 0;
}

