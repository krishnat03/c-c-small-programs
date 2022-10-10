#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;
    int ans[5];
    for (int i = 0; i < 5; i++)
    {
        ans[(i + k) % 5] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

// Cyclically Rotate the array by K

// Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

// Example :

// 5  —Value of N

// {10, 20, 30, 40, 50}  —Element of Arr[ ]

// 2  —Value of K

// Output :  40 50 10 20 30