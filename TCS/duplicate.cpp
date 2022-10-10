#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            ans.push_back(it.first);
        }
    }
    if (ans.size() == 0)
    {
        cout << "-1";
    }
    for(auto it : ans){
        cout << it << " ";
    }
    return ans;
    
}
int main()
{
    system("cls");
    int a[5] = {2, 3, 1, 2, 3};
    duplicates(a, 5);

    return 0;
}

// Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

// Example 1:

// Input:
// N = 4
// a[] = {0,3,1,2}
// Output: -1
// Explanation: N=4 and all elements from 0
// to (N-1 = 3) are present in the given
// array. Therefore output is -1.
// Example 2:

// Input:
// N = 5
// a[] = {2,3,1,2,3}
// Output: 2 3
// Explanation: 2 and 3 occur more than once
// in the given array.