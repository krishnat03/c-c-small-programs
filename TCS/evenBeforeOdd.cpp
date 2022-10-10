#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr = {10, 98, 3, 33, 12, 22, 21, 11};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            ans.push_back(arr[i]);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}