#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[3],b[3];
	    int ca = 0,cb=0;
	    for (int i = 0; i < 3; i++) {
	        cin>>a[i];
	        if(a[i]==1){
	            ca++;
	        }
	    }
	    for (int i = 0; i < 3; i++) {
	        cin>>b[i];
	        if(b[i]==1){
	            cb++;
	        }
	    }
	    if(ca == cb){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	    
	}
	return 0;
}
