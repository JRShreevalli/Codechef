#include <iostream>
using namespace std ;

int Pro(int val)
{
    int last = val % 10 ;
    while(val > 9)
    {
        val /= 10 ; 
    }
    return last + val % 10 ;
}
int main()
{
    int t , i , n ;
    cin >> t ;
    for(i=0 ; i<t ; i += 1)
    {
        cin >> n ;
        cout << Pro(n) << "\n" ;
    }
    return 0 ;
}
