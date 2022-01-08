#include <iostream>
using namespace std ;

int Rect(int t , int a[ ] , int b[ ] , int c[ ] , int d[ ] )
{
    int i ;
    for( i = 1 ; i <= t ; i++ )
    {
        if(a[i] == b[i] == c[i] == d[i])
                cout << "YES"  << endl ;
        else if((a[i] == b[i] && c[i] == d[i])||( a[i] == c[i] && b[i] == d[i])||(a[i] == d[i] && b[i] == c[i])||(a[i] == d[i] && b[i] == c[i]))
                cout << "YES"  << endl ;
        else
                cout << "NO"  << endl ;
    }
    return 0 ;
}
int main()
{
    int t , i ;
    cin >> t ;
    int a[t+1] , b[t+1] , c[t+1] , d[t+1] ;
    for( i = 1 ; i <= t ; i++ )
        cin >> a[i] >> b[i] >> c[i] >> d[i] ;
    Rect(t , a , b , c , d )  ;
return 0 ;
}
