Problem :  Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

          1) Password must contain at least one lower case letter [a−z];

          2) Password must contain at least one upper case letter [A−Z] strictly inside, i.e. not as the first or the last character;

          3) Password must contain at least one digit [0−9] strictly inside;

          4) Password must contain at least one special character from the set { '@', '#', '%', '&', '?' } strictly inside;

          5) Password must be at least 10 characters in length, but it can be longer.
            
          Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. 
          Please help Chef in doing so.

Code : PASSWD
Link : https://www.codechef.com/LP1TO203/problems/PASSWD

// SOLUTION //
            
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long n,i,j,k,l,m,o=0,p=0,q=0,r=0;
        string s;
        cin>>s;
        n=s.size();
            
            for(i=1; i<n-1; i++)
            {
                if(s[i]=='&' || s[i]=='#'|| s[i]=='%'|| s[i]=='@'||s[i]=='?')
                {
                    o++;
                }
                else if(isupper(s[i]))
                {
                    q++;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    r++;
                }
                
            }
            for(i=0; i<n; i++)
            {
                if(islower(s[i]))
                {
                    p++;
                }
            }
            
            if(p>=1 && q>=1 && r>=1&& o>=1 && n>=10)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
	return 0;
}

