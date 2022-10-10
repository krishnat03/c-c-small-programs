#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s = "this is longest string in the world";
    stringstream str(s);
    string word, ans;
    string smallest;
    ans = "";
    smallest = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    while (str >> word)
    {
        if (word.length() > ans.length())
        {
            ans = word;
        }
        if (word.length() < smallest.length())
        {
            smallest = word;
        }
    }
    cout << "Largest word : " << ans << endl;
    cout << "Smallest word : " << smallest;

    return 0;
}