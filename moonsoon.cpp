#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
 while(n--)
 {
    int n;
    cin>>n;
    int car[n];
    int m;
    cin>>m;
    int outlet[m];
    int hour=0;
    cin>>hour;
    for(int i=0;i<n;i++)
    cin>>car[i];

    for(int i=0;i<m;i++)
    cin>>outlet[i];
  
  sort(car, car+n , greater<int>());
  sort(outlet,outlet+m, greater<int>());
  int mini = min(n,m);
 int sum=0;
  for(int i=0;i<mini;i++)
  {
     if(outlet[i]*hour <= car[i])
     sum+=outlet[i]*hour;
     else
     sum+=car[i];
  }

    cout<<sum<<endl;
 }
}