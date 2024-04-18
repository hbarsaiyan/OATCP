#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(1e9 + 7);

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    string s;
    cin >> s;
    ll x;
    cin >> x;
    string ans = "";

    for (char &character : s)
    {
        while (ans.size() && ans.back() > character && x)
        {
            ans.pop_back();
            x--;
        }
        if (ans.size() || character != '0')
            ans.push_back(character);
    }

    while (ans.size() && x--)
    {
        ans.pop_back();
    }

    if (ans == "")
    {
        ans = "0";
    }

    ll final = stoi(ans);
    cout << final << endl;
    return 0;
}