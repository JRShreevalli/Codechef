#include <iostream>
using namespace std ;

int main()
{
    int n  , rate ;
    cin >> n ;
    for(int i=0 ; i<n ; i += 1)
    {
        cin >> rate ;
        if(rate < 1600)
            cout << 3 << "\n" ;
        else if (rate >= 1600 && rate < 2000)
            cout << 2 << "\n" ;
        else
            cout << 1 << "\n" ;
    }
    return 0 ;
}
