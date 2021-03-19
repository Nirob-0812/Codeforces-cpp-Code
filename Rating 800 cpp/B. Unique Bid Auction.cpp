#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        vector<int> v1;
        int n,a,c=0,cnt=0,ans;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(v1[i]!=v1[i+1])
                {
                    ans=v1[i];
                    break;
                }
            }
            else if(i==(n-1))
            {
                if(v1[i]!=v1[i-1])
                {
                    ans=v1[i];
                    break;
                }
            }
            else
            {
                if((v1[i]!=v1[i-1]) && (v1[i]!=v1[i+1]))
                {
                    ans=v1[i];
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ans==v[i])
            {
                c=i+1;
                cnt++;
                break;
            }
        }
        if(cnt>=1)
        cout<<c<<endl;
        else
            cout<<"-1"<<endl;

        c=0;
        cnt=0;
        ans=0;
        v1.clear();
        v.clear();
        }
    }

    return 0;
}
