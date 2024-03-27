#include <bits/stdc++.h>
using namespace std;
int MOD = int(1e9 + 7);

void ar()
{
    int n, prices;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    cin >> prices;

    priority_queue<int, vector<int>, greater<int>> pq;
    int count = 0;

    for(int i=0;i<n;i++) 
    {
        pq.push(x[i]);
    }

    while (!pq.empty())
    {
        if (prices < pq.top())
            break;
        count++;
        prices -= (pq.top());
        pq.pop();
    }

    cout<<count;

    return;
}
int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    ar();
    return 0;
}