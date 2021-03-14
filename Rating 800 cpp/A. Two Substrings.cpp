#include<iostream>
#include<string>
using namespace std;
int main()
{
    int ab,ab1,ba,ba1;
    string str;
    cin>>str;
    ab=str.find("AB");
    ab1=str.find("BA",ab+2);
    ba=str.find("BA");
    ba1=str.find("AB",ba+2);
    if(ab>=0 && ab1>=0 || ba>=0 && ba1>=0 )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

        return 0;
}
