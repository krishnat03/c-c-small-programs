#include <bits/stdc++.h>
using namespace std;
int countFactors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
            cout << i<< " ";
        }
    }
    cout << count;
    return count;
}
int main()
{
    system("cls");
    int n = 25;
    countFactors(n);
    return 0;
}