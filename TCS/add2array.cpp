#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr1 = {1,2,3,4,5,1};
    vector<int> arr2 = {8};
    vector<int> ans;
    int a=0,b=0,total=0;
    for (int i = 0; i < arr1.size(); i++)
    {
        a=a*10+arr1[i];
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        b=b*10+arr2[i];
    }
    total = a+b;
    int rem;
    while (total>0)
    {
        rem = total%10;
        total=total/10;
        ans.push_back(rem);
    }
    for (int i = ans.size()-1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    return 0;
}