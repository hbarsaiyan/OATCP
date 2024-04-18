#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = int(1e9 + 7);


int count_subgrids(int **color, int n)
{
    int subg = 0;
    for (int a = 0; a < n; ++a)
        for (int b = a + 1; b < n; ++b)
        {
            int x = 0;
            for (int i = 0; i < n; ++i)
            {
                if (color[a][i] == 1 && color[b][i] == 1)
                    ++x;
            }
            subg += ((x - 1) * x) / 2;
        }
    return subg;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int n;
    cin >> n;
    int **array;
    array = new int *[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    int ans = count_subgrids(array, n);
    cout << ans << "\n";
}