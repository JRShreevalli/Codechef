#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,odd,even;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
        odd=a1+a3+a5+a7+a9;
        even=a2+a4+a6+a8+a10;
    if(even==odd)
    {
        cout<<"0"<<endl;
    }
    else if(even>odd)
    {
        cout<<"2"<<"\n";
    }
    else
    {
        cout<<"1"<<"\n";}
    }
return 0;
}
