#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int i=0;
    while(n--)
    {
          cin>>s;
          if(s[1]=='+')
          i++;
          else
          i--;
    }
    cout<<i;
}
