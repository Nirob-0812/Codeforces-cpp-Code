#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v1;
        vector<int> v2;
        int n,a,b,c=0,one=0,zero=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b;
            v2.push_back(b);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v1[i+1]<v1[i])
            {
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v2[i]==1)
            one++;
            if(v2[i]==0)                    
            zero++;
        }
        if(c==0)
        cout<<"Yes"<<endl;
        else if((c>=1 && one==0) || (c>=1 && zero==0))
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
        v1.clear();
        v2.clear();
        c=0;
        zero=0;
        one=0;
    }

    return 0;
}