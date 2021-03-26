#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,a,c=0,m,res=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                if(v[i]>v[i+1])
                {
                    m=v[i];
                    if(m>res)
                    {
                        res=v[i];
                        c=i+1;
                    }
                }
                else
                {
                    m=v[i+1];
                    if(m>res)
                    {
                        res=v[i+1];
                        c=i+1+1;
                    }
                }


            }
        }
        if(c>=1)
        cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    }
}
