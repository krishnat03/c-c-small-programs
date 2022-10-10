#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 1, 5, 1};
    int n = 5;
    // using unordered map
    unordered_map<int, int> um;
    for (int i = 0; i < 5; i++)
    {
        um[arr[i]]++;
    }
    for (auto it : um)
    {
        cout << it.first << " " << it.second << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        if (um[arr[i]] == 1)
        {
            cout << arr[i];
        }
    }

    // using loop
    // for (int i = 0; i < n; i++)
    // {
    //     int j;
    //     for (j = 0; j < n; j++)
    //         if (i != j && arr[i] == arr[j])
    //             break;
    //     if (j == n)
    //         cout << arr[i];
    // }

    return 0;
}