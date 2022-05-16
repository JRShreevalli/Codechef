PProblem : 
            There are n chocolates, and you are given an array of n numbers where the i-th number Ai is the flavour type of the i-th chocolate. 
            Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least x 
            number of chocolates for her little brother.

            Find the maximum possible number of distinct flavour types Sebrina can have.
              
Code :  CM164364
Link :  https://www.codechef.com/LP1TO204/problems/CM164364

// SOLUTION // 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,r,choco;
         cin>>n>>x;
	    
	    set<int> z;
	    for(int i=0;i<n;i++){
	        
	        cin >> r;
	        z.insert(r);
	    }
	    int y=z.size();
	 choco= min(n-x,y);
	 cout<<choco<<"\n";
    }
    return 0 ;
}
