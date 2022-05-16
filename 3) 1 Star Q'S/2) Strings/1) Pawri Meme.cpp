Problem : 
          Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string S and change each of its substrings 
          that spells "party" to "pawri". Find the resulting string.
            
Problem Code :    PAWRI

Link : https://www.codechef.com/LP1TO203/problems/PAWRI

// SOLUTION 

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() 
{
	int t ;
	string str ;
	cin >> t ;
	while ( t-- )
	{
		cin >> str ;
		int len = str.length() ;
		int i ;

		for( i = 0 ; i < len ; i++ )
		{
			if( str[i] == 'p' && str[i+1] == 'a' && str[i+2] == 'r' && str[i+3] == 't' && str[i+4] == 'y' )
			{
				str[i] = 'p' ;
				str[i+1] = 'a' ;
				str[i+2] = 'w' ;
				str[i+3] = 'r' ;
				str[i+4] = 'i' ;
			}
			else
			{
				str[i] = str[i] ;
			}
		}
		for( i = 0 ; i < len ; i++ )
		{
				cout << str[i] ;
		}
		cout << endl ;
	}
	return 0 ;
}
