#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(1e9 + 7);

int hammDis(int x, int y)
{
    int count = 0;
    for (int i = 31; i >= 0; i--)
    {
        int first = (x & (1 << i));
        int second = (y & (1 << i));
        if (first != second)
            count++;
    }
    return count;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int x;
    vector<int> nums;
    while (cin >> x)
    {
        nums.push_back(x);
        if (cin.get() == '\n')
            break;
    }
    int n=nums.size();
    int t=n;
    while (t--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans += hammDis(nums[i], nums[j]);
        }
    }
    cout << ans << "\n";
}