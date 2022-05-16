Problem Question :
                    Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same 
                    frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check 
                    for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. 
                    Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
                    The two halves contain the same characters but their frequencies do not match.
                    Your task is simple. Given a string, you need to tell if it is a lapindrome.
                      
Problem Link : https://www.codechef.com/LP1TO203/problems/LAPIN
Problem Code : LAPIN 

// SOLUTION //

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string first, second;
        int n = s.length();
        for(int i=0;i<n/2;i++)
        {
            first = first + s[i];
            second = second + s[n-i-1];
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        if(first == second)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
