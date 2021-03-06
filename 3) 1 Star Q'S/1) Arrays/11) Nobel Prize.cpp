Problem :
          The growth of Computer Science has forced the scientific community to award Nobel Prize in CS starting from this year.
          Chef knows that the Nobel community is going to award the prize to that person whose research is different from others 
          (ie. no other researcher should work on the same topic). If there are multiple such people, who work on unique topics, 
          then they will all share the prize. It might also happen that no one wins this time.

          Chef also knows the N researchers which the community who will be considered for the prize, and the topics in which each of them work.

          In total the CS field can be divided into M broad topics. Given the topics in which each of the N researchers are working on, 
          in the form of an array A, and given that Chef can master any topic instantly, find whether he can win the prize. 
          That is, can the Chef choose to work on some topic which will guarantee that he will win the prize? Chef doesn't mind 
          sharing the prize with others.
            
            
Problem Code :
                NOBEL
                
// SOLUTION 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
		int t;
		cin>>t;
		int n,m;
	    while(t--)
	    {
	        cin>>n>>m;
	        int a[n];
	        set<int>check;
	        
	        for(int i=0;i<n;i++)
	        {
	            cin>>a[i];
	            check.insert(a[i]);
	        }
	        
	    if(check.size()==m)
	        cout<<"No"<<endl;
	    else 
	        cout<<"Yes"<<endl;
	}
	return 0;
}
