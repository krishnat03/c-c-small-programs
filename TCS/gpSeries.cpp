#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n, ans;
    cout << "enter n : ";
    cin >> n;
    cout << "enter index : ";
    cin >> ans;
    int a = 1, b = 1;
    vector<int> arr;
    cout << "series is : ";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << a << " ";
            arr.push_back(a);
            a = a * 2;
        }
        else
        {
            cout << b << " ";
            arr.push_back(b);
            b = b * 3;
        }
    }
    cout << endl;
    cout << "ans is : " << arr[ans];
    return 0;
}