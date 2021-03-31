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
#define testcase long long int t; cin>>t; while(t--)
#define getfor int i; for(i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end()); 

int main()
{
    testcase
    {
        long double a,b,c,cnt=0;
        cin>>a>>b;
        int p=a;
        int q=b;
        if(a==b)
        {
            cout<<"0"<<endl;
            goto nirob;
        }
        else if(p%2==1 && q%2==1)
        {
            cout<<"-1"<<endl;
            goto nirob;
        }
        else if(a<b)
        {
            while(1)
            {
                cnt++;
                b=b/8;
                if(b<a)
                {
                    b=(b*8)/4;
                    if(b==a)
                    {
                        c=1;
                        break;
                    }
                    if(b<a)
                    {
                        b=(b*4)/2;
                    }
                    if(b==a)
                    {
                        c=1;
                        break;
                    }
                    if(b<a)
                    {
                        break;
                    }

                }
                if(b==a)
                {
                    c=1;
                    break;
                }

            }
        }
        else if(a>b)
        {
            while(1)
            {
                cnt++;
                a=a/8;
                if(a<b)
                {
                    a=(a*8)/4;
                    if(b==a)
                    {
                        c=1;
                        break;
                    }
                    if(a<b)
                    {
                        a=(a*4)/2;
                    }
                    if(b==a)
                    {
                        c=1;
                        break;
                    }
                    if(a<b)
                    {
                        break;
                    }

                }
                if(b==a)
                {
                    c=1;
                    break;
                }

            }

        }

        if(c==1)
        {
            cout<<cnt<<endl;
        }
        else if(c==0)
        cout<<"-1"<<endl;
        cnt=0;
        c=0;
        nirob:
        cout<<"";
    }

    return 0;
}