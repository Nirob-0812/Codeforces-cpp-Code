#include<iostream>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5,sum;
    cin>>c1>>c2>>c3>>c4>>c5;
    sum=c1+c2+c3+c4+c5;
    if(sum%5==0 && sum/5>=1)
    {
        cout<<sum/5<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
