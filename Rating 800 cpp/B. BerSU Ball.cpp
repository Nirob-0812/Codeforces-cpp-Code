#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> b;
    vector<int> g;
    int boys,girls,n,m,c=0,p=0;
    cin>>boys;
    for(int i=0;i<boys;i++)
    {
        cin>>n;
        b.push_back(n);
    }
    sort(b.begin(),b.end());
    cin>>girls;
    for(int i=0;i<girls;i++)
    {
        cin>>m;
        g.push_back(m);
    }
    sort(g.begin(),g.end());
    for(int i=0;i<boys;i++)
    {
        for(int j=p;j<girls;j++)
        {
            if(abs(b[i]-g[j])==1 || abs(b[i]-g[j])==0)
            {
                c++;
                p=j+1;
                break;
            }
        }
    }

    cout<<c<<endl;

    return 0;

}
