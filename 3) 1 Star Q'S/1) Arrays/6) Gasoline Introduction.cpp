Problem :
          There are N cars (numbered 1 through N) on a circular track with length N. For each i (2≤i≤N), the i-th of them 
          is at a distance i−1 clockwise from car 1, i.e. car 1 needs to travel a distance i−1 clockwise to reach car i. 
          Also, for each valid i, the i-th car has fi litres of gasoline in it initially.

          You are driving car 1 in the clockwise direction. To move one unit of distance in this direction, you need to spend 1 litre
          of gasoline. When you pass another car (even if you'd run out of gasoline exactly at that point), you steal all its gasoline. 
          Once you do not have any gasoline left, you stop.

          What is the total clockwise distance travelled by your car?
                                                  
Problem Code :  BEGGASOL

Link : https://www.codechef.com/LP1TO202/problems/BEGGASOL

// SOLUTION 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int fuel = arr[0];
        while (fuel)
        {
            count += 1 ;
            if (count < n)
                fuel += arr[count];
            fuel--;
        }
        cout << count << endl;
    }
    return 0;
}
