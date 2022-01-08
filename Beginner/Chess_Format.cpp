#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x=a+b;
	    if(x<3){
	        cout<<1<<endl;
	    }
	    else if(x>=3&&x<=10){
	        cout<<2<<endl;
	    }
	    else if(x>=11&&x<=60){
	        cout<<3<<endl;
	    }
	    else{
	        cout<<4<<endl;
	    }
	}
	return 0;
}
