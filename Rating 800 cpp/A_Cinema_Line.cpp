#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a,c=0,f=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==25)
        {
            c++;
        }
        else if(v[i]==50)
        {
            f++;
            c=c-1;
            if(c<0)
            break;
        }
        else if(v[i]==100)
        {
            if(f>=1 && c>=1)
            {
                f=f-1;
                c=c-1;
            }
            else
            c=c-3;
            if(c<0)
            break;
        }
    }
    if(c>=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
     
     return 0;
}