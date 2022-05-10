Problem Statement :
                  Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. 
                  The wildcard character '?' can be substituted by any single lower case English letter for matching. 
                  He has two strings X and Y of equal length, made up of lower case letters and the character '?'. 
                  He wants to know whether the strings X and Y can be matched or not.
                    
Problem Code :  TWOSTR
Problem LInk :   https://www.codechef.com/LP1TO203/problems/TWOSTR

// SOLUTION 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        string y;
        int count=0;
        cin>>x>>y;
        int  size1=x.length();

            for(int i=0;i<size1;i++)
            {
                if(x[i]==y[i])
                {
                    count++;
                }
                else if(x[i]=='?'||y[i]=='?')
                {
                    count++;
                }
                else
                {
                    count=0;
                }

        }
        if(count==size1)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }

return 0;
}
