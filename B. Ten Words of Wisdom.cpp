#include<bits/stdc++.h>
using namespace std; 
int main(){
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int a[n];
			int b[n];
			for(int i=0;i<n;i++)
			{
				cin>>a[i]>>b[i];
			}

			int indexa=-1;
			int maxa = INT_MIN;
			for(int i=0;i<n;i++)
			{
				if(a[i]<=10)
				{
					if(b[i]>maxa)
					{
						maxa=b[i];
						indexa=i+1;
					}

				}
			}
			cout<<indexa<<endl;
		}
}
