#include <iostream>
#include <cmath>
using namespace std ;

class parent 
{
    private :
                int i ;
    public :
                int program( int n , int k )
                {
                    int arr[n] ;
                    int count = 0 ;

                    for ( i = 1 ; i <= n ; i++ )
                    {
                      cin >> arr[i] ;
                         if (arr[i] % k == 0)
                             count++ ;
                    }        
                    cout << count ;
                    return 0 ;
                }

} ;
int  main()
{
    int n , k  ;
    cin >> n >> k ;
    parent ob ;
    ob.program( n , k) ;
    return 0 ;
}
