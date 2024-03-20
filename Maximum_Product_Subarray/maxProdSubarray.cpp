#include <bits/stdc++.h>
using namespace std;

int findMaxProduct(vector<int>& nums) {
    const int MOD = 1e9 + 7;
    long long maxi = INT_MIN; 
    long long prod = 1; 

    for(int i = 0; i < nums.size(); i++) {
        prod = (prod * nums[i]) % MOD; 
        maxi = max(prod, maxi);
        if(prod == 0) prod = 1;
    }
    
    prod = 1;
    for(int i = nums.size() - 1; i >= 0; i--) {
        prod = (prod * nums[i]) % MOD; 
        maxi = max(prod, maxi);
        if(prod == 0) prod = 1;
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    if(n>0){
        vector<int> nums;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            nums.push_back(a);
        }
    int product=0;
    product = findMaxProduct(nums);
    cout << product << endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}