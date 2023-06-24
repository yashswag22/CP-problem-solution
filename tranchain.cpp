#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int m;
	    cin>>m;
	   //char aaa[m];
	   int aa=0,b=0,c=0,d=0;
      
	    for(int i=0;i<m;i++)
	    {
	        string a;
            cin>>a;
            //aaa[i]=a;
	        if(a[0]=='A' && a.size()==1)
	        aa++;
	        else if(a[0]=='B')
	        b++;
	        else if(a[0]=='A' && a[1]=='B')
	        c++;
	        else if(a[0]=='O')
	        d++;
	        
	    }
        // //     for(int i=0;i<m;i++)
        // //     cout<<aaa[i]<<" ";
        // cout<<aa<<" "<<c<<" ";
        int chainA= aa+c+d;
        int chainB=b+c+d;
       int maxchain = max(chainA,chainB);
      cout<<maxchain<<endl;
	    
	}
}
