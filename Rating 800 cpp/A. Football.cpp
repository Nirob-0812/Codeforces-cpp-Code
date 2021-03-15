#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> v;
    int n,e=1,dif=0;
    string str,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        v.push_back(str);
    }

    for(int i=1;i<n;i++)
    {
        if(v[0]==v[i])
        {
            e++;
        }
        else
        {
            dif++;
            d=v[i];
        }
    }
    if(e>dif)
    {
        cout<<v[0]<<endl;
    }
    else
        cout<<d<<endl;
}
