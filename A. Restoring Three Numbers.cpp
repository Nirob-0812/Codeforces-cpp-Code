#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[4],first,second,third;
    vector<int> V;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        V.push_back(a[i]);
    }
    sort(V.begin(),V.end());
    /*for(int i=0;i<4;i++)
    {
        cout<<V[i]<<endl;
    }*/
    first=V[3]-V[0];
    second=V[2]-first;
    third=V[1]-first;
    cout<<first<<" "<<second<<" "<<third<<endl;
}
