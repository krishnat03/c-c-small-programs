#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr1 = {2,1,2,5,7,1,9,3,6,8,8};
    vector<int> arr2 = {2,1,8,3};
    map<int,int> mp;
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        mp[arr1[i]]++;
    }
    for(int i = 0; i< arr2.size();i++){
        while (mp[arr2[i]]>0)
        {
            ans.push_back(arr2[i]);
            mp[arr2[i]]--;
        }
    }
    for(auto it : mp){
        if (it.second>0)
        {
            ans.push_back(it.first);
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}