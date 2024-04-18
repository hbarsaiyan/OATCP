#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(1e9 + 7);

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    vector<ll> v;
    ll x;
    while (cin >> x)
    {
        v.push_back(x);
        if (cin.get() == '\n')
            break;
    }

    ll n;
    cin >> n;
    ll miss = 1, ans = 0, i = 0;

    while (miss <= n)
    {
        if (i < v.size() && v[i] <= miss)
        {
            miss += v[i++];
        }
        else
        {
            miss += miss;
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}