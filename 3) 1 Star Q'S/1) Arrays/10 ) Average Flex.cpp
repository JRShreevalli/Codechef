Problem question :
                  There are N students in a class, where the i-th student has a score of Ai.
                  The i-th student will boast if and only if the number of students scoring less than or equal Ai 
                  is greater than the number of students scoring greater than Ai.

                  Find the number of students who will boast.
                    
Problem Code :
                AVGFLEX

Link :	https://www.codechef.com/LP1TO202/problems/AVGFLEZ
// SOLUTION 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t , n  ,  i ;
	cin >> t ;
	while( t-- )
	{
	    cin >> n ;
	    int a[n] ;
	    int ans = 0 ;
	    
	    for( i=0 ; i<n ; i++ )
	    {
	        cin >> a[i] ;
	    }
	    
	    sort(a , a + n ) ;
	    
	    for (int i = 0; i < n; i++) 
	    {
            int h = 0;
            int l = 0;
            for (int j = 0; j < n; j++) 
            {
                if(a[j] <= a[i])
                    {
                         l++;
                    }
                    else if (a[j] > a[i])
                    {
                         h++;
                    }
            }
            if(l>h)
                    {
                         ans++;
                    }
          }
          
          cout << ans << endl;
	}
	return 0;
}
