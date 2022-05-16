Problem :
          Chef wants to take Chefina on a date. However, he has to complete one more task before leaving. 
          Since he does not want to be late, he is asking you for help.
          There are N bags with coins in a row (numbered 1 through N); for each valid i, the i-th bag contains Ai coins. 
            
          Chef should make the number of coins in each bag divisible by a given integer K in the following way:

          choose an integer c between 0 and N (inclusive)
          take some coins from the first c bags ― formally, for each i (1≤i≤c), he may choose any number of coins between 0 and Ai 
          inclusive and take them out of the i-th bag
          move some of these coins to some of the last N−c bags ― formally, for each i (c+1≤i≤N), he may place a non-negative number of coins 
          in the i-th bag Of course, the number of coins placed in the last N−c bags must not exceed the number of coins taken out 
          from the first c bags, but there may be some coins left over. Let's denote the number of these coins by R. 
          You should find the smallest possible value of R.
            
Problem Code : CASH

Link : https://www.codechef.com/LP1TO202/problems/CASH

// SOLUTION 

#include <iostream>
using namespace std;

int main() 
{
	long long int t;
	cin >> t;
	while(t--)
	{
	   long long int n , k ;
	   cin >> n >> k ;
	   long long int v[n];
	   
	   for(int i= 0; i<n; i++)
	            cin >> v[i];
	            
	    long long int sum = 0;
	    
	    for(int i = 0; i<n; i++)
	        sum += v[i];
	
	    cout<<sum % k<<endl;
	}
	return 0;
}
