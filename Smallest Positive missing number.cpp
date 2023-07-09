
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int i=1;
        sort(arr,arr+n);
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            i++;
        }
        return i;
    } 
};
