#include <iostream>
using namespace std;

int sumInt(int num)
{
    int res= 0;
    while(num > 0)
    {
        int rem = num%10;
        res = res + rem ;
        num /=10;
    }
    return res+num;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int num;
	    cin>>num;
	    int res = sumInt(num);
	    cout<<res<<endl;
	}
	return 0;
}
