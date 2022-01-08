#include <iostream>
using namespace std ;

class parent 
{
    private :
                int i ;
    public :
                int program(int t , int a[] , int b[] )
                {
                    for(i = 1 ; i <= t ; i++ )
                    {
                        int min = max(a[i],b[i]) ;
                        int max = a[i] + b[i] ;
                        cout << min << " " << max << endl ;
                    }
                    return 0 ;
                }
};
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] , b[t] ;
    for( i = 1 ; i <= t ; i++)
        cin >> a[i] >> b[i] ;
    parent ob ;
    ob.program( t , a , b ) ;
return 0 ;
}
