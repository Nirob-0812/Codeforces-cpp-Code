#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,mx,sub,a;
    cin>>n>>m;
    if(n==1 && m==1)
    {
        cout<<"2"<<endl;
    }
    else if(m>=n)
    {
    a=sqrt(m);
    sub=m-a*a;
    if((sub*sub)+a==n)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    }
    else if(n>=m)
    {
    a=sqrt(n);
    sub=n-a*a;
    if((sub*sub)+a==m)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    } 
    }

}