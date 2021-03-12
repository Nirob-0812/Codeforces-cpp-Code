#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,a,cnt=1,dif=1,total=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;
            }
            else
            {
                dif++;
                total=max(total,cnt);
                cnt=1;
            }
        }
        total=max(total,cnt);
        if(dif==total)
        {
            dif=dif-1;
        }
        int max_size=min(dif,total);
        cout<<max_size<<endl;

    }

    return 0;
}
