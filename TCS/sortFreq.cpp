#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    system("cls");
    vector<int> arr = {1, 2, 3, 2, 4, 3, 1, 2};
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int, int>> A;
    for (auto it : mp) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (int i = A.size()-1; i >= 0; i--)
    {
        while (A[i].second > 0)
        {
            cout << A[i].first << " ";
            A[i].second--;
        }
    }
    return 0;
}