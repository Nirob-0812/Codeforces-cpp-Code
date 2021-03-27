#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> v;
        int x,p=9,q;
        cin>>x;
        if(x<=9)
        {
            cout<<x<<endl;
        }
        else if(x>45)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            while (1)
            {
                x=x-p;
                v.push_back(p);
                p--;
                if(p>=x)
                {
                    v.push_back(x);
                    break;
                }
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<endl;
            
        }
    }
    
}