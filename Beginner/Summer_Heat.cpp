#include <iostream>
using namespace std ;

int main()
{
    int t , xa , xb , x1 , x2 ;
    cin >> t ;
    while(t--)
    {
        cin >> xa >> xb >> x1 >> x2 ;
        int add1 = (x1 / xa ) ;
        int add2 = (x2 / xb) ;
        cout <<  add1 + add2  << endl ;
    }
    return 0 ;
}
