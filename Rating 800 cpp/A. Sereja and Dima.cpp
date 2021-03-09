#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,sum=0,sum1=0,Sereja=0,dima=0,s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int first=0,last=v.size()-1,c=0;
    while(first<=last)
    {
        if(v[first]<v[last])
        {
            s=v[last];
            last--;
        }
        else
        {
            s=v[first];
            first++;
        }
        if(c%2==0)
        {
            Sereja=Sereja+s;
        }
        else
            dima=dima+s;
        c++;
    }

    cout<<Sereja<<" "<<dima<<endl;
    return 0;
}
