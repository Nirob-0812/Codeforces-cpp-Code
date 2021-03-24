#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one9=0,two0=0,twtw=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='2' && str[i+1]=='0' && str[i+2]=='2' && str[i+3]=='0')
            {
                twtw++;
                break;
            }
            else if((str[i]=='1' && str[i+1]=='9'))
            {
                one9++;
                i++;
            }
            else if((str[i]=='2' && str[i+1]=='0'))
            {
                two0++;
                i++;
            }
        }
        if(twtw==1 || (one9>=1 && two0>=1))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
