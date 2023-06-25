class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int  count=0;
        int ans =0;
        
    for (int i = 0; i < nums.size()-1; i++)
    {  for(int j=i+1;j<nums.size();j++)
    {  int digi = (int)log10(nums[i]);
 
    // Find first digit
       int a = (int)(nums[i] / pow(10, digi));
       int b= nums[j]%10;
        ans = __gcd(a, b);
        if (ans==1)
            count++;
    }
    }
    
    return count;
        
    }
};
