Problem Question
                  Given a string S consisting of only 1s and 0s, find the number of substrings which start and end both in 1.
                  In this problem, a substring is defined as a sequence of continuous characters Si, Si+1, ..., Sj where 1 ≤ i ≤ j ≤ N.
  
 Problem Code : 
                CSUB
 Problem LInk : https://www.codechef.com/LP1TO203/problems/CSUB
 
// SOLUTION 1 // 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long n,i,p;
        cin>>n;
        string s;
        cin>>s;
        p=count(s.begin(),s.end(),'1');
        cout<<(p*(p+1)/2) <<endl;
        
    }
	// your code goes here
	return 0;
}

//  count return no . of occurence of 1 in input //
// SOLUTION 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,c=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	    }
	    cout<<(c*(c+1))/2<<endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
