#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>test(3);
	    for(int i=0;i<3;i++)
	    {
	        cin>>test[i];
	    }
	    sort(test.begin(),test.end());
	    cout<<test[1]<<endl;
	}
	return 0;
}
