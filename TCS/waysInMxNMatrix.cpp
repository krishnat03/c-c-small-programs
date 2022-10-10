#include <bits/stdc++.h>
using namespace std;
int count(int m, int n)
{
    if (m == 1 || n == 1)
    {
        return 1;
    }
    return count(m - 1, n) + count(m,n - 1);
}
int main()
{
    system("cls");
    int ans = count(3,3);
    cout << ans;
    return 0;
}