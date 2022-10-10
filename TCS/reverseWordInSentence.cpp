#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string str = "This is long string";
    stack<string> s;
    stringstream x(str);
    string word;
    while (x >> word)
    {
        s.push(word);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}