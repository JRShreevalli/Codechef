#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t , i ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int c[n] = {0} ;
        string l[n] , f[n]  ;

        for(i=0 ; i<n ; i++)
        {
            cin >> f[i] >> l[i] ;
        }
        int j ;
        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<n ; j++)
            {
                if(i != j && f[i] == f[j] )
                {
                    c[i] = 1 ;
                }
            }
        }
        for(i=0 ; i<n ; i++)
            {
                if(c[i] == 1)
                {
                    cout << f[i] << " " << l[i] << endl ;
                }
                else
                {
                    cout << f[i] << endl ;
                }
            }
    }
    return 0 ;
}
