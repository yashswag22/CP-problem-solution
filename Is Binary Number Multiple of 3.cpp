class Solution{
public:	
		
	int isDivisible(string s){
	    long long l=s.length()-1;
	   unsigned long long sum=0;
	    for(long i=0;i<s.length();i++)
	    {  if(s[i]=='1')
	        {
	            if(l%2==0)
	             {
	                 sum++;
	                 l--;
	             }
	             else
	             {
	                 sum+=2;
	                 l--;
	             }
	        }
	        else
	        l--;
	    }
	    
	    if(sum % 3== 0)
	    {
	        return 1;
	    }
	    
	    return 0;
	}
