#include <bits/stdc++.h>
using namespace std;
int rev(int n){
    string s = to_string(n);
    reverse(s.begin(),s.end());
    int ans = stoi(s);
    return ans;
}
int main()
{
    system("cls");
    int a = 23456;
    cout << rev(a);
    return 0;
}