#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a , a+n);
	    
	    long long minCost = (a[0]*(n-1));
	    
	    cout<<minCost<<endl;
	}
	return 0;
}
