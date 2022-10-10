// Write a program to find smallest integer value b for a given value of a . If we multiply the digits of b,
// We should get exact value of a.
// Result b must contain more than one digit
// inp : 10
// out : 25 // 2*5 = 10
// inp : 100
// out : 455
#include<bits/stdc++.h>
using namespace std;
void findSmallest(int n)
{
    int i, j = 0;
    int res[100];
    if (n < 10)
    {
        cout << n + 10;
        return;
    }
    for (i = 9; i > 1; i--)
    {
        while (n % i == 0)
        {
            n = n / i;
            res[j] = i;
            // cout << res[j] <<endl;
            j++;
        }
    }
    if (n > 10)
    {
        cout << "Not possible";
        return;
    }
    for (i = j - 1; i >= 0; i--)
        cout << res[i];
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    findSmallest(30);
    return 0;
}