class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int mini[n]={0};
        int maxa[n]={0};
        for(int i=0;i<n;i++)
        {
            if(i==0)
            mini[i]=arr[i];
            else
            {
                mini[i]=min(mini[i-1],arr[i]);
            }
        }
        for(int i=n-1;i>-1;i--)
        {
            if(i==n-1)
            maxa[i]=arr[i];
            else
            {
                maxa[i]=max(maxa[i+1],arr[i]);
            }
        }
        
        int count=0;
        int lft=0,rt=0;
        while(lft<n && rt<n)
        {
           if(mini[lft]<=maxa[rt])
           {
               count=max(count,(rt-lft));
               rt++;
           }
           else if(mini[lft]>maxa[rt])
           {
               lft++;
           }
           
        }
        
        return count;
    }

};
