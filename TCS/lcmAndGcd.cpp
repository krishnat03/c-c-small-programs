#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int a = 4, b = 8;
    int gcd;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    int lcm = (a * b) / gcd;
    cout << "The LCM of the two given numbers is " << lcm << endl;
    cout << "The GCD of the two given numbers is " << gcd;
    return 0;
}