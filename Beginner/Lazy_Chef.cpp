#include <iostream>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    int x[t] , m[t] , d[t] ;
    for(int i=0 ; i < t ; i += 1 )
    {
        cin >> x[i] >> m[i] >> d[i] ;
        int a = x[i] * m[i] ;
        int b = x[i] + d[i] ;
        cout << min(a,b) << "\n" ;
    }
    return 0 ;
}
