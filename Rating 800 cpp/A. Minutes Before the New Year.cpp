#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hour,minute;
        cin>>hour>>minute;
        cout<<24*60-((hour*60)+minute)<<endl;
    }
}
