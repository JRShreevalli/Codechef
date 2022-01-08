#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
      int M,E=0,I=0,D=0,i=5;
      
      while(i--)
      {
        cin >> M;
        
        if(M==0)
        { 
          D++; 
        }
        else if(M==1)
        { 
          I++; 
        }
        else 
        { 
          E++; 
        }
      }
      
      if(I>E)
      { 
        cout << "INDIA\n"; 
      }
      else if(E==I)
      {
        cout << "DRAW\n"; 
      }
      else
      { 
        cout << "ENGLAND\n"; 
      }
    }
}
