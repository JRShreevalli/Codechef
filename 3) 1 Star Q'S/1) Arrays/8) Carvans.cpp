Problem :
          Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. 
          He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of 
          the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car 
          had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder how 
          many cars were moving at their maximum speed.

          Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. 
          Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. 
          It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight 
          segment is infinitely long.

          Count the number of cars which were moving at their maximum speed on the straight segment.
            
Problem Code :  
              CARVANS

// SOLUTION :

#include <iostream>
using namespace std;

int main() 
{
	int t ;
	cin >> t ;
	while( t-- )
	{
	    long long int n , i  ;
	    cin >> n ;
	    long long int car[n] , count = 0 ;
	    
	    for( i=0 ; i<n ; i++)
	        cin >> car[i] ;
	        
	    for( i=0 ; i<n ; i++ )
	    {
	        if( car[i+1] <= car[i] )
	            count += 1 ;
	        else
	            car[i+1] = car[i] ;
	    }
	    cout << count + 1 << endl;
	}
	return 0;
}
