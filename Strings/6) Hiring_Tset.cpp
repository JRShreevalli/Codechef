Problem Statement :
                    A company conducted a coding test to hire candidates. 
                    N candidates appeared for the test, and each of them faced M problems. 
                    Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'),
                    or solved completely (denoted by 'F').

                    To pass the test, each candidate needs to either solve X or more problems completely, or solve (X−1) problems completely,
                    and Y or more problems partially.

                    Given the above specifications as input, print a line containing N integers. 
                    The ith integer should be 1 if the ith candidate has passed the test, else it should be 0.
                      
Problem Code :  HIRETEST
LInk :  https://www.codechef.com/LP1TO203/problems/HIRETEST

// SOLUTION //

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,x,y;
	    cin >>n >>m;
	    cin >>x >>y;
	    
	    char arr[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin >> arr[i][j];
	        }
	        cout<<endl;
	    }
	    
	    
	    int res[n];
	    int a=0;
	    int b=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        a = 0;
	        b = 0;
	        
	        for(int j=0;j<m;j++)
	        {
	           if(arr[i][j]=='F')
	           {
	               a += 1 ;
	           }
	           else if(arr[i][j]=='P')
	           {
	               b += 1 ;
	           }
	        }
	        if ((a>=x) || ((a==x-1)&&(b>=y)))
	        {
	            res[i] = 1;
	        }
	        else{
	            res[i]=0;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<res[i];
	    }
	    
	}
	return 0;
}
