#include <bits/stdc++.h>
using namespace std;

vector<string> genSubsequences(const string &str, string current, int index, int length)
{
    vector<string> ans;

    if (length == 0)
    {
        ans.push_back(current);
        return ans;
    }

    if (index == str.length())
    {
        return ans;
    }

    vector<string> withCurrent = genSubsequences(str, current + str[index], index + 1, length - 1);
    ans.insert(ans.end(), withCurrent.begin(), withCurrent.end());

    vector<string> withoutCurrent = genSubsequences(str, current, index + 1, length);
    ans.insert(ans.end(), withoutCurrent.begin(), withoutCurrent.end());

    return ans;
}

int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);

    int n;
    cin >> n;
    vector<vector<string>> vs;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        vector<string> ans;
        set<string> st;

        for (int i = 1; i <= 4; ++i)
        {
            vector<string> subs = genSubsequences(s, "", 0, i);
            for (int j = 0; j < subs.size(); j++)
            {
                if (st.find(subs[j]) == st.end())
                {
                    ans.push_back(subs[j]);
                    st.insert(subs[j]);
                }
            }
        }
        vs.push_back(ans);
    }

    for (int l = 0; l < vs.size(); l++)
    {
        for (int j = 0; j < vs[l].size(); j++)
        {
            cout << vs[l][j] << endl;
        }
        cout<<endl;
        cout<<endl;
    }


    return 0;
}