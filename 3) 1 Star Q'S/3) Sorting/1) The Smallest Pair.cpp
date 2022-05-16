Problem :  
          You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.
            
Code : SMPAIR
Link : https://www.codechef.com/LP1TO204/problems/SMPAIR

// SOLUTION //

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr, arr+n);
        int a = arr[0]+arr[1];
        cout<<a<<endl;
    }
}

