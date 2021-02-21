#include<iostream>
using namespace std;
int main()
{
    int a,b,c,one,two,three,four,five,m1,m2,m3,m4;
    cin>>a>>b>>c;
    one=a+(b*c);
    two=a*(b+c);
    three=a*b*c;
    four=(a+b)*c;
    five=a+b+c;
    m1=max(one,two);
    m2=max(three,four);
    m3=max(m1,m2);
    m4=max(m3,five);
    cout<<m4<<endl;

    return 0;
}
