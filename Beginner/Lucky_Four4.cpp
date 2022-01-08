#include <iostream>
using namespace std ;

int four(int arr[] , int n )
{
    for(int i=0 ; i<n ; i++)
    {
        int c=0 ;
        while(arr[i] != 0)
        {
            int rem = arr[i] % 10 ;
            if(rem == 4)
                c = c + 1 ;
            arr[i] = arr[i] /  10 ;
        }
        cout << c << endl ;
    }
}
int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
        cin >> a[i] ;
    four(a,n) ;
    return 0 ;
}
