Problem Quetion :
                  Chef has just started watching Game of Thrones, and he wants to first calculate the exact time 
                  (in minutes) that it'll take him to complete the series.
                  The series has S seasons, and the ith season has Ei episodes, each of which are Li,1,Li,2,…,Li,Ei minutes long.
                  Note that these Li,j include the duration of the beginning intro song in each episode. The streaming service that he uses,
                  allows Chef to skip the intro song. The intro song changes slightly each season, and so he wants to watch the intro song in the first episode of each season, but he'll skip it in all other episodes of that season (yes, we know, a sacrilege!). You know that the intro song lasts for Qi minutes in the ith season.

                  Find the total time in minutes, that he has to watch.
                    
Problem Code : COLGLF2

Link : https://www.codechef.com/LP1TO202/problems/COLGLF2

// SOLUTION 

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
	ll t , seasons , i  ;
	cin >> t ;
	while(t--)
	{
	    cin >> seasons ;
	    ll intro[ seasons + 1 ] ;
	    ll  ans = 0 , no_of_epi ;
	    
	    for( i=1 ; i<=seasons ; i += 1 )
	    {
	        cin >> intro[i] ;
	    }
	    
	    for( i=1 ; i<=seasons ; i += 1 )
	    {
	        cin >> no_of_epi ;
	        
	        ll  arr[ no_of_epi + 1] ;
	        
	        for(int k=1 ; k<=no_of_epi ; k++)
	        {
	            cin >> arr[k] ;
	            ans = ans + arr[k] - intro[i] ;
	        }
	        ans = ans + intro[i] ;
	    }
	    cout << ans << endl ;
	}
	return 0;
}


