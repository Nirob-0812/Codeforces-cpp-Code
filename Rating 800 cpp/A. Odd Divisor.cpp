#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,c=0;
        cin>>n;

        if(n%2!=0)
        {
            cout<<"YES"<<endl;
            goto nirob;
        }
        else if(n%2==0)
        {
            while(1)
            {
                n=n/2;
                if(n%2!=0)
                {
                    if(n>1)
                    {
                        c=1;
                        break;
                    }
                    else
                        break;
                }
            }
        }
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        nirob:
            cout<<"";


    }
    return 0;
}
