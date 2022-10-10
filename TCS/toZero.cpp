#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int up, low;
    cin >> low >> up;
    for (int i = low; i <= up; i++)
    {
        if (up >= 100)
        {
            cout.fill('0');
            cout.width(3);
            cout << i;
        }
        else if (up >= 10)
            cout << setfill('0') << setw(1) << i;
        else
            cout << i;
    }
    return 0;
}