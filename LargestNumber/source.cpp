#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool custom_comparator(string str1, string str2)
{
    string temp1 = str1 + str2;
    string temp2 = str2 + str1;
    return (temp1 > temp2);
}

string generate_largest_number(vector<int> &nums)
{
    vector<string> nums_modified;
    for(int i=0;i<nums.size();i++)
    {
        nums_modified.push_back(to_string(nums[i]));
    }

    sort(nums_modified.begin(), nums_modified.end(), custom_comparator);

    if (nums_modified[0] == "0")
    {
        return "0";
    }
    string res = "";
    for(int i=0;i<nums_modified.size();i++)
    {
        res += nums_modified[i];
    }
    return res;
}


int main() 
{
  
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    vector<int> nums;
    int n;
    while(cin >> n) 
    {
        nums.push_back(n);
    }

    string res = generate_largest_number(nums);

    cout << res << "\n";
    return 0;
}