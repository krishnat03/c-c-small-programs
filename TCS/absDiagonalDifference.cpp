#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int a[3][3] = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};
    int left = 0, right = 0, ans;
    int count = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                left += a[i][j];
            }
            if (j == count)
            {
                right += a[i][j];
            }

        }
        count--;
    }
    // cout << left;
    // cout << right;
    ans = abs(left - right);
    cout << ans;
    return 0;
}