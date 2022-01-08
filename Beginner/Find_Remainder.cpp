#include <iostream>
using namespace std ;

class parent
{
    private :
            int i ;  
    public :
            void remainder( int t )
            {
                int a[t] , b[t] ;
                for ( i = 1 ; i <= t ; i++ )
                {
                    cin >> a[i]  ;
                    cin >> b[i]  ;
                }
                for( i = 1 ; i <= t ; i++ )
                {
                    int rem = a[i] % b[i] ;
                    cout << rem << endl ;
                    a[i]++ ;
                    b[i]++ ;
                }
            }
};
int main()
{
    int t ;
    cin >> t ;
    parent obj ;
    obj.remainder( t ) ;
return 0 ;
}
