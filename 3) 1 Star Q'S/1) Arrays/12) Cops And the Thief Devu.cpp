Problem Question :
                    There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. 
                    Some M houses out of these 100 are occupied by cops.
                    Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
                    PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her 
                    bag and ran into some house.
                    Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for 
                    a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops. 
                    Help him in getting this information.
                    
Problem Code :
                  COPS
                  
LInk : https://www.codechef.com/LP1TO202/problems/COPS

// SOLUTION 

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t)
    {
        int x,y,m,count=0,flag=0;
        cin>>m>>x>>y;
        int arr[m];
        for(int i=0;i<m;i++) cin>>arr[i];
        int houses = x*y;
        for(int i=1;i<101;i++)
        {
            flag =0;
            for(int j =0;j<m;j++)
            {
                if(i>=(arr[j]-houses) && i<=(arr[j]+houses))
                flag = 1;
            }
            if(!flag) 
                count++;
        }
        cout<<count<<endl;
        t--;
    }
	
	return 0;
}
