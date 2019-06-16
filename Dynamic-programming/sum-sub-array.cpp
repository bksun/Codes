#include<iostream>
#include<vector>
using namespace std;
        // Time Complexity: O(n)
        // Space complexity: O(n)
    int maxSubArray(vector<int>& nums) {
        int i, n = nums.size();
        vector<long long> dp(n+1, 0);
        long long ans = INT_MIN;

        for ( i = 0; i < n; i++)
        {
            dp[i+1] = nums[i];
            dp[i+1] = max(dp[i+1], nums[i] + dp[i]);
            ans = max(dp[i+1], ans);
        }
        return ans;
    }

int main() {

     
    return 1;
}