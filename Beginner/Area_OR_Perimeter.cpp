#include <iostream> 
using namespace std; 

int main()
{
	int l , b ;
	cin >> l >> b ;
	int per = l + b ;
	int peri = 2 * per ;
	int area = l * b ;
	if(peri == area)
	{
		cout << "Eq" << endl ;
		cout << peri ;
	}
	if( peri > area )
	{
		cout << "Peri" << endl ;
		cout << peri ;
	}
	 if (area > peri)
	 {
		cout << "Area" << endl ;
		cout << area ;
	 }
return 0 ;
}
