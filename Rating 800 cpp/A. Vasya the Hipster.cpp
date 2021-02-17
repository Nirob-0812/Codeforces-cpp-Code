#include<iostream>
using namespace std;
int main()
{
    int red,blue,dif;
    cin>>red>>blue;
    if(red==blue)
    {
        cout<<red<<" 0"<<endl;
    }
    if(red>blue || red<blue)
    {
        if(red>blue)
        {
            dif=red-blue;
            cout<<blue<<" "<<dif/2<<endl;
        }
        else if(red<blue)
        {
            dif=blue-red;
            cout<<red<<" "<<dif/2<<endl;

        }
    }
}
