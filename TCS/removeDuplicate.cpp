#include <bits/stdc++.h>
using namespace std;
int remove_duplicate(int a[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    return s.size();
}
int main()
{
    system("cls");
    int arr[] = {2,2,2};
    cout << remove_duplicate(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}