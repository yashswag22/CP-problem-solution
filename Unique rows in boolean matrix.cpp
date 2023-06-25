class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
       int arr[row]={0};
        for(int i=0;i<row-1  ;i++)
        {  
            if(arr[i]==0)
            {
                for(int j=i+1;j<row  ;j++)
            {  
                if(arr[j]==0)
                {
                    int check =0;
                for(int k=0;k<col;k++)
                {
                    if(M[i][k]!=M[j][k])
                    {
                        check=1;
                        break;
                    }
                }
                if(check==0)
                arr[j]=1;
                }
            }
            }
        }

        vector<vector<int>> v2;
        for(int i=0;i<row  ;i++)
        {  if(arr[i]==0)
        {
            vector<int> v1;
            for(int j=0;j<col;j++)
            {
               
                v1.push_back(M[i][j]);
            }
            v2.push_back(v1);
        }
        }

        return v2;
    }
};
