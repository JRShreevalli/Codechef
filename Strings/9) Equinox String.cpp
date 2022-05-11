Problem Statement :
                  Sarthak and Anuradha are very good friends and are eager to participate in an event called Equinox. 
                  It is a game of words. In this game, N strings S1,…,SN are given. For each string Si, 
                  if it starts with one of the letters of the word “EQUINOX”, Sarthak gets A points and if not, 
                  Anuradha gets B points. The one who has more points at the end of the game wins. 
                  If they both the same number of points, the game is a draw..

                  Print the winner of the game, if any, otherwise print “DRAW”.
                    
Problem Code :  EQUINOX 

Problem LInk :  https://www.codechef.com/LP1TO203/problems/EQUINOX

// SOLUTION //

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t , n , a , b ;
	long long i ;
	cin >> t ;
	while( t-- )
    {
        cin >> n >> a >> b ;
        string str ;
        long long sarthak = 0 , Anuradha = 0 ;
        for ( i = 0 ; i < n ; i++ )
        {
            cin >> str ;
            if( str[0] == 'E' || str[0] == 'Q' || str[0] == 'U' || str[0] == 'I' || str[0] == 'N' || str[0] == 'O' || str[0] == 'X')
                    sarthak = sarthak + a ;
            else
                    Anuradha = Anuradha + b ; 
        }
        if ( sarthak > Anuradha )
            cout << "SARTHAK" << endl ;
        else if ( Anuradha > sarthak )
            cout << "ANURADHA" << endl ;
        else
            cout << "DRAW" << endl ;
    }
	return 0;
}
