#include <iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==7)||(b==7)||(c==7)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
