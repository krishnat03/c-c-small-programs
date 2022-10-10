#include <bits/stdc++.h>
using namespace std;
string modify(string s)
{
    string k;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            k += s[i];
        }
    }
    cout << k;
    return k;
}
int main()
{
    string s = "this is string";
    modify(s);
    return 0;
}