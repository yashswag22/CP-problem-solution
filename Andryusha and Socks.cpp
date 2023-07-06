#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    int ans=0;
    for (int  i = 0; i < 2*n; i++)
    {
        int j;
        cin>>j;
        if(s.count(j)==0)
       {
         s.insert(j);
         if(s.size()>=ans)
            ans=s.size();
       }
       else if(s.count(j)==1)
       {
         s.erase(j);
       }
    }
    cout<<ans;
}
