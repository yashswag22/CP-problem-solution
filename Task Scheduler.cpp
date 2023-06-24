#include<bits/stdc++.h>
using namespace std;
int main()
{  int N=6,K=2;
    vector<char> tasks={'A', 'A', 'A', 'B', 'B', 'B'};
 
    int freq[26]={0};
        for(int i=0;i<N;i++)
        {
            freq[tasks[i]-'A']+=1;
        }
        
        sort(freq, freq+26,greater<int>());
        
        int ideal= (freq[0]-1)*K;
        for(int i=1;i<25;i++)
        {
            ideal= ideal-min(freq[0]-1,freq[i]);
        }
        
        int out_= tasks.size()+max(0,ideal);
        cout<<out_;
}