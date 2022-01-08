#include <iostream>
using namespace std ;

int main()
{
    unsigned long int n , k , t ;
    cin >> t ;
    while (t--)
    {
        cin >> n >> k ;
        
        if(k == 0)
        {
            cout << n << endl ;
            continue ;
        }
        
        cout << n%k << endl ;
    }
   return 0 ; 
}
