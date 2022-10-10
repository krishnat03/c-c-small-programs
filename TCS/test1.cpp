#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string h, w;
    cin >> h >> w;
    vector<int> v1(26), v2(26);
    for (auto x : h)
    {
        v1[x - 'a']++;
    }
    for (auto x : w)
    {
        v1[x - 'a']++;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (auto x : s)
        {
            v2[x - 'a']++;
        }
    }
    bool ans = true;
    for (int i = 0; i < 26; i++)
    {
        if (v1[i] < v2[i])
        {
            ans = false;
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}
