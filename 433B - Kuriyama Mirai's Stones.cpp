#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n;
   cin>>n;
   ll a[n];
   ll b[n];
   for(int i=0;i<n;i++)
   { ll temp;
      cin>>temp;
     a[i]=temp;
     b[i]=temp;
   }
   sort(b,b+n);
   for(int i=1;i<n;i++)
   {
    a[i]+=a[i-1];
    b[i]+=b[i-1];
   }
  

   int m;
   cin>>m;
   while(m--)
 {
    ll t,l,r;
    cin>>t>>l>>r;
    l=l-1;
    r=r-1;
    if(t==1)
    { if(l==0)
       cout<<a[r]<<"\n";
       else
       cout<<a[r]-a[l-1]<<"\n";
    }
    else
    {
        if(l==0)
        cout<<b[r]<<"\n";
        else
        cout<<b[r]-b[l-1]<<"\n";
    }
   }
}
