// C++ manipulator setprecision function is used to control the number of digits of an output stream display of a floating- point value.

#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    int t , i ;
    double  hra , da , val  ;
    cin >> t ;
    int a[t] ;
    for(i=0 ; i<t ; i += 1)
    {
        cin >> a[i] ;
        if(a[i] < 1500)
            {
                hra = 0.1 * a[i] ;
                da = 0.9 * a[i] ;
            }
        else if(a[i] >= 1500)
        {
            hra = 500 ;
            da = 0.98 * a[i] ;
        }
        val = a[i] + hra + da ;
        cout << setprecision(2) << fixed ;
        cout << val << "\n" ;
    }
    return 0 ;
}
