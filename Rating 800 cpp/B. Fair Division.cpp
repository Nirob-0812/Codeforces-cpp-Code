#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,two=0,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==1)
            {
                one++;
            }
            else if(a==2)
            {
                two++;
            }
        }
        if(one%2==0 && two%2==0 && (one+two*2)%2==0 || one%2==0 && one>=2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
