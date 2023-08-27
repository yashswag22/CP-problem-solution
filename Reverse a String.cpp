class Solution
{
    public:
    string reverseWord(string str)
    {
       int n = str.size();
       int temp = n-1;
       for(int i=0;i<n/2;i++)
       {
           swap(str[i],str[temp-i]);
       }
       
       return str;
    }
};
