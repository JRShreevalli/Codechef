#include <iostream>
using namespace std;

int main() {
	int T,N,K,max,i;
	cin >> T;
	while(T--){
	    cin >> N >> K;
	    max = 0;
	    for(i=1; i<=K;i++){
	        if(N%i > max){max = N%i;}
	    }
	    cout << max << endl;
	}
}
