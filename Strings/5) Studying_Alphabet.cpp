Problem Statement :
                  Not everyone probably knows that Chef has younder brother Jeff. Currently Jeff learns to read.
                  He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, 
                  Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists 
                  only of the letters he knows.

                  Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!
                    
Problem Code : ALPHABET
Problem link : https://www.codechef.com/LP1TO203/problems/ALPHABET

// SOLUTION //

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string st;
    while (n--)
    {
        cin >> st;
        int count = 0;
        for (int i = 0; i < st.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (st[i] == s[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == st.size())
        {
            cout << "Yes"<<endl;
        }
        else
        {
            cout << "No"<<endl;;
        }
    }
    return 0;
}
