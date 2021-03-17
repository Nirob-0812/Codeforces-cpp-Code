#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int q;
    cin>>q;
    while(q--)
    {
        vector<long long int> v;
        long long int i,a,sum;
        for(i=0;i<3;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[1])
        {
            cout<<v[0]+(v[2]/2)<<endl;
        }
        else if(v[0]>v[1])
        {
            v[1]=v[0]-v[1];
            sum=v[2]-v[1];
            cout<<v[0]+(sum/2)<<endl;
        }
        else
        {
            v[0]=v[1]-v[0];
            sum=v[2]-v[0];
            cout<<v[1]+(sum/2)<<endl;

        }
    }

    return 0;
}
