#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string a = "aaaa", b = "bccb";
    map<char, int> mp1;
    map<char, int> mp2;
    for (int i = 0; i < a.length(); i++)
    {
        mp1[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        mp2[b[i]]++;
    }
    for (auto it : mp1)
    {
        for (auto itr : mp2)
        {
            if (it.first == itr.first)
            {
                if (abs(it.second - itr.second) <= 3)
                {
                    cout << "possible" << endl;
                }
                else
                {
                    cout << "not possible" << endl;
                }
            }
            else
            {
                if (it.second >= 4)
                {
                    cout << "not possible" << endl;
                }
            }
        }
    }

    return 0;
}