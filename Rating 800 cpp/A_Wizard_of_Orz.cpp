#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n;
        if(n==1)
        cout<<"9"<<endl;
        else if(n==2)
        cout<<"98"<<endl;
        else if(n==3)
        cout<<"989"<<endl;
        else
        {
            k=n-3;
            cout<<"989";
            p=0;
            while(k--)
           {
               cout<<p;
               p++;
               if(p==10)
               {
                  p=0;
               }
           }
           cout<<endl;

        }
    }

    return 0;
}