Problem Question :
                    Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, 
                    these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.
                    Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the 
                    feedback as Good or Bad :

                    If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. 
                    Note that, to be Good it is not necessary to have both of them as substring.

                    So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.
                                                                                  
Problem Code :  ERROR

link : https://www.codechef.com/LP1TO203/problems/ERROR

// SOLUTION //

#include <iostream>
#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

int fun ( string str )
{
    int i ;
    int flag = 0 ;
    int len = str.length() ;
    for ( i = 0 ; i < len ; i++ )
    {
        if ( str[i] == '0' && str[i+1] == '1' && str[i+2] == '0' )
        {
            flag = 1 ;
            break ;
        }
        if ( str[i] == '1' && str[i+1] == '0' && str[i+2] == '1' )
        {
            flag = 1 ;
            break ;
        }
    }
    if ( flag == 0 )
        cout << "Bad" << endl ;
    else
        cout << "Good" << endl ;
return 0 ;
}

int main() 
{
    int t  ;
    string feedback ;

    cin >> t ;
    while ( t-- )
    {
        cin >> feedback ;
        fun(feedback) ;
    }
return 0 ;
}
