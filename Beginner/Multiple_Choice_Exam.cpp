#include <iostream>
using namespace std ;

int main()
{
    int t , n ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        string a , b ;
        cin >> a >> b ;
        int c = 0 ;
        for(int i=0 ; i<n ; i += 1)
        {
            if(a[i]==b[i]){
	            c++;
	        }
	        else
            {
	            if(b[i] !='N')
                {
	                i=i+1;
	            }
	        }
        }
        cout << c << "\n" ;
    }
    return 0 ;
}
