#include<iostream>
using namespace std;
int main()
{
    int n,sum,hun=0,twen=0,ten=0,five=0,one=0;
    cin>>n;
    while(n!=0)
    {

    if(n>=100)
    {
        n=n-100;
        hun++;
    }
    else if(n>=20 && n<100)
    {
        n=n-20;
        twen++;
    }
    else if(n>=10 && n<20)
    {
        n=n-10;
        ten++;
    }
    else if(n>=5 && n<10)
    {
        n=n-5;
        five++;
    }
    else if(n>=1 && n<5)
    {
        n=n-1;
        one++;
    }
    }
    sum=hun+twen+ten+five+one;
    cout<<sum<<endl;
}
