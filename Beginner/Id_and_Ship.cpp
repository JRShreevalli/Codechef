#include <iostream>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    char a[t] ;
    for(int i=0 ; i<t ; i += 1)
    {
        cin >> a[i] ;
        if(a[i] == 'B' || a[i] == 'b')
            cout << "BattleShip" << "\n" ;
        if(a[i] == 'C' || a[i] == 'c')
            cout << "Cruiser" << "\n" ;
        else if( a[i] == 'D' || a[i] == 'd')
            cout << "Destroyer" << "\n" ;
        else if( a[i] == 'F' || a[i] == 'f')
            cout << "Frigate" << "\n" ;
    }
    return 0 ;
}
