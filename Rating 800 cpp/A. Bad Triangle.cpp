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
        int n,a,c=0,d,sum;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sum=v[0]+v[1];
        for(int i=2;i<n;i++)
        {
            if(sum<v[i])
            {
                d=i;
                c++;
                break;
            }
        }
        if(c==1)
        {
           cout<<"1"<<" "<<"2"<<" "<<d+1<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
