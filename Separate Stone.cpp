class Solution {
  public:
    int separateStones(int N, int k, vector<int> &arr) {
        int black=0,white=0;
       for (int i=0;i<N;i++)
       {
           if (arr[i]==0)
           white++;
           else if(arr[i]==1)
           black++;
           
       }
       int ans=0;
       if(black%k == 0)
       ans = black/k;
       else
       ans = black/k +1;
       
       if(white % k==0)
       ans+=white/k;
       else
       ans+= (white/k + 1);
       
       return ans;
    }
};
