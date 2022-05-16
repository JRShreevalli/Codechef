Problem Question :
                    Chef has gone shopping with his 5-year old son. They have bought N items so far. 
                    The items are numbered from 1 to N, and the item i weighs Wi grams.

                    Chef's son insists on helping his father in carrying the items. He wants his dad to give him a few items. 
                    Chef does not want to burden his son. But he won't stop bothering him unless he is given a few items to carry. 
                    So Chef decides to give him some items. Obviously, Chef wants to give the kid less weight to carry.

                    However, his son is a smart kid. To avoid being given the bare minimum weight to carry, he suggests that the items are 
                    split into two groups, and one group contains exactly K items. Then Chef will carry the heavier group, and his son will 
                    carry the other group.

                    Help the Chef in deciding which items should the son take. Your task will be simple. 
                    Tell the Chef the maximum possible difference between the weight carried by him and the weight carried by the kid.
                      

Link : https://www.codechef.com/LP1TO204/problems/MAXDIFF 
Code : MAXDIFF

// SOLUTION //

#include<bits/stdc++.h>
using namespace std;
int t,n,k,sum1,sum2,sum;
int main() {
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       sum1=0,sum2=0,sum=0;
       int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
      }
      sort(arr,arr+n);
      for(int i=0; i<k; i++)
      {
          sum1+=arr[i];
      }
      for(int i=n-1; i>n-1-k; i--)
      {
          sum2+=arr[i];
      }
      sum1=abs(sum1);
      sum2=abs(sum2);
      if(abs(sum1-(sum-sum1))>abs(sum2-(sum-sum2))) 
            cout<< abs(sum1-(sum-sum1))<<endl;
        else 
            cout<< abs(sum2-(sum-sum2))<<endl;
   }
}
