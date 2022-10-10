#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int q = 123653333;
    int f = 3;
    int count = 0;
    while (q > 0)
    {
        int rem;
        rem = q % 10;
        if (rem == f)
        {
            count++;
        }
        q = q / 10;
    }
    cout << count;
    return 0;
}