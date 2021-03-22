#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,m,x,y,one=0,two=0,sum;
        string str;
        cin>>n>>m>>x>>y;
        while(n--)
        {
            cin>>str;
            for(i=0;i<m;i++)
            {
                if(str[i]=='.' && str[i+1]=='.' && i<m-1)
                {
                    two++;
                    i++;
                    goto nirob;
                }
                else if(str[i]=='.')
                {
                    one++;
                }
                nirob:
                    cout<<"";
            }
        }
        if((x*2)<=y)
        {
            sum=(two*2)+one;
            cout<<sum*x<<endl;
        }
        else
        {
            sum=(one*x)+two*y;
            cout<<sum<<endl;
        }
    }

    return 0;
}
