#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(string s)
{
    int ans = 0, k = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ans += pow(2, k);
        }
        k++;
    }
    cout << ans << endl;
    return ans;
}
int main()
{
    system("cls");
    int B = 10001000;
    string s = to_string(B);
    cout << stoi(s, 0, 2) << endl; // one line solution binary to decimal
    binary_to_decimal(s);
    return 0;
}