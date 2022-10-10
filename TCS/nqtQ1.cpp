#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> a = {2, 3, 1, 5, 4};
    vector<int> b = {1, 2, 3, 4, 5};
    int count = 0;
    bool flag = false;
    vector<int> temp;
    // while (!flag)
    // {
    for (int i = 0; i < a.size(); i++)
    {
        // b[i] = b[a[i]];
        temp.insert(temp.begin()+1,b[i]);
    }
    // }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}