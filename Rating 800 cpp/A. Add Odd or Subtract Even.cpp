#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,sub;
        cin>>a>>b;
        if(a==b)
            cout<<"0"<<endl;
        else if(a>b)
        {
            sub=a-b;
           if(sub%2==0)
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
        }
        else  if(a<b)
        {
            sub=b-a;
            if(sub%2==0)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
    }

    return 0;
}
