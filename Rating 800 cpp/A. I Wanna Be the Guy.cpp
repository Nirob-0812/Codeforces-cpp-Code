#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,p,q,y,j=1;
    cin>>n>>x;
    vector<int> vec;
    for(int i=0;i<x;i++)
    {
        cin>>p;
        vec.push_back(p);
    }
    cin>>y;

    for(int i=0;i<y;i++)
    {
        cin>>q;
        vec.push_back(q);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==j)
            j++;
    }
    if(j-1==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
