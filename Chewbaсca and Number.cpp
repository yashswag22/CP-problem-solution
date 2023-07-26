#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;

    cin>>n; 
 
    long long ans=0;
    vector <int>v;
    while(n!=0)
    {
        int temp = n%10;
        v.push_back(temp);
        n=n/10;
    }
    long long s = v.size();
    for(int i= s-1;i>-1;i--)
    {   if(i==s-1 && v[i]==9)
        {
           v[i]=v[i];
         }
        else if(9-v[i] <  v[i])
        {
            v[i]=9-v[i];
       
        }
         ans = ans*10+v[i];
    }
   
    cout<<ans;
}
