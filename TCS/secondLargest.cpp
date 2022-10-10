#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr = {1,2,3,1,3,4,5,6,2,2,3,4,38,9};
    vector<int> ans;
    set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    for (auto it : s)
    {
        ans.push_back(it);
    }
    cout << ans.rbegin()[1];
    return 0;
}