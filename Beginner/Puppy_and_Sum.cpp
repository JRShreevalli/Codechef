#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	   int d, n;
	   cin >> d >> n;
	   
	 for(int i = 1;i <= d;i++)
	 {
	     n = (n * (n + 1)) / 2;
	 }
	 cout << n << endl;
	  
	}
	return 0;
}
