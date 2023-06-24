#include<bits/stdc++.h>
using namespace std;
int main()
{
    // bills vector is given in question 
  vector<int> bills;
    int fi=0,tn=0,tw=0,check=0;
    for(int i=0;i<bills.size();i++)
    {
        if(bills[i]==5)
        {
            fi++;
        }
        else if(bills[i]==10)
        {
            tn++;
            if(fi>=1)
            fi--;
            else if(fi<1)
            {
                check=1;
                break;
            }
        }
        else if(bills[i]==20)
        {
            tw++;
            if(fi>=1 && tn>=1)
            {fi--; tn--;}
            else if(fi>=3)
            fi=fi-3;
            else if((fi<3 && tn<1) || (fi<1 && tn<1) || fi<1 )
            {
                check=1;
                break;
            }
        }
    }
    if(check==0)
    return true;
    else 
    return false;
}
