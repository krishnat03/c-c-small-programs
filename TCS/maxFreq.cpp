#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr = {1, 4, 8, 13};
    vector<int> res;
    int maxFreq = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int inc = 5;
        int c = 0;
        res = arr;
        while (inc > 0 && res[i] < res[i + 1])
        {
            res[i]++;
            inc--;
        }
        for (int j = 0; j < res.size(); j++)
        {
            cout << res[j] << " ";
            if (res[i] == res[j])
            {
                c++;
            }
        }
        cout << endl;
        if (c >= maxFreq)
        {
            maxFreq = c;
        }
    }
    cout << maxFreq;

    return 0;
}