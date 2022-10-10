#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr = {20,15,26,2,98,6};
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }
    sort(arr.begin(),arr.end());
    unordered_map<int,int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]] = i+1;
    }
    // for(auto it : mp){
    //     cout << it.first << " " << it.second << endl;
    // }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << mp[temp[i]] << " ";
    }
    return 0;
}