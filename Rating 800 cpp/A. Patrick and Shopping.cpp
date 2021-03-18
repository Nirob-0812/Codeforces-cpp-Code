#include<iostream>
using namespace std;
int main()
{
     int d1,d2,d3,way1,way2,way3,way4,Min;
     cin>>d1>>d2>>d3;
     way1=(d1*2)+(d2*2);
     way2=(d1*2)+(d3*2);
     way3=(d2*2)+(d3*2);
     way4=d1+d2+d3;
     Min=min(min(min(way4,way3),way2),way1);
     cout<<Min<<endl;


}
