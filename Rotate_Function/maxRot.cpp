#include <bits/stdc++.h>
using namespace std;

long long int maxRot(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans += i*nums[i];
        }
        int index=n-1;
        int res=ans;
        for(int k=1;k<n;k++){
            ans = ans - ((n-1)*nums[index]) + (sum-nums[index]);
            res=max(res,ans);
            index--;
        }
        return res;
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
        int rotVal = maxRot(nums);
        cout << rotVal << endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
