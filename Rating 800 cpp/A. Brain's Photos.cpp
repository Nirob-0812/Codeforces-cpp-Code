#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    set<char> s;
     int n,m,mul;
     cin>>n>>m;
      mul=n*m;
      char str[mul];
      cin>>str;
      for(int i=0;i<mul;i++)
      {
          s.insert(str[i]);

      }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
