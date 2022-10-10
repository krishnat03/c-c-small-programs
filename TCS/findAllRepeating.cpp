// C++ program to find indices of all
// occurrences of one string in other.
#include <iostream>
using namespace std;
void printIndex(string str, string s)
{

    bool flag = false;
    for (int i = 0; i < str.length(); i++)
    {
        // cout << str.substr(i, s.length()) << endl;
        if (str.substr(i, s.length()) == s)
        {
            cout << i << " ";
            flag = true;
        }
    }

    if (flag == false)
        cout << "NONE";
}
int main()
{
    system("cls");
    string str1 = "This is long string and this string is longest";
    string str2 = "ing";
    printIndex(str1, str2);
    return 0;
}