#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ans.push_back(arr[i]);
        }
    }
    if (ans.size() == 0)
    {
        cout << "Not found";
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}