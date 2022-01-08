#include <iostream>
using namespace std ;

int check_4(int num)
{
    int temp = num ;
    int c = 0 ;
    while(temp != 0)
    {
        if (temp % 10 == 4)
            c = c + 1 ;
        temp = temp / 10 ; 
    }
    return c ; 
}
int main()
{
    int t , n , i ;
    cin >> t ;
    for(i=0 ; i<t ; i++)
    {
        cin >> n ;
        cout << check_4(n) << endl ;
    }
    return 0 ;
}
