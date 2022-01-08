#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int size,money;
	    cin>>size>>money;
	    int array[size];
	    for(int k=0;k<size;k++)
	    {
	        cin>>array[k];
	    }
	    for(int p=0;p<size;p++)
	    {
	        int amount=array[p];
	        if(amount>money)
	            cout<<'0';
	        else
	        {
	            money=money-amount;
	            cout<<'1';
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
