#include<bits/stdc++.h>
using namespace std;

int
main ()
{
  int t;
  cin >> t;
  for(int i =0; i<t; i++)
    {
      string x, y;
      cin >> x >> y;
      
      int count = 0;
      for (int j = 0; j < x.size(); j++)
	{
	  if ((x[j] == y[j]) || (x[j] == '?') || (y[j] == '?'))
	    {
	      count++;
	    }
	}
      if (count == x.size())
	{
	  cout << "Yes" << endl;
	}
      else
	{
	  cout << "No" << endl;
	}
    }
  return 0;
}
