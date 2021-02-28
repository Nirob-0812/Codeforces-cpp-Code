#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    if(n%2==1)
    {
        num=(n/2)-1;
        cout<<num+1<<endl;
    }
    else
        {
        num=n/2;
        cout<<num<<endl;
        }
    if(n%2==1)
    {
      for(int i=0;i<num;i++)
      {
          cout<<"2"<<" ";
      }
      cout<<"3"<<endl;
    }
    else
    {
        for(int i=0;i<num;i++)
      {
          cout<<"2"<<" ";
      }
      cout<<endl;
    }

}
