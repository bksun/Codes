#include<iostream>
#include<vector>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int i, n = nums.size();
        //vector<long long> dp(n+1, 0);
        long long prev_max = INT_MIN;
        long long curr_max = 0;
        long long ans = INT_MIN;
    
        for ( i = 0; i < n; i++)
        {
            curr_max = nums[i];
            curr_max = max(curr_max, nums[i] + prev_max);
            ans = max(curr_max, ans);
            prev_max = curr_max;

        }
        return prev_max;
    }

int main() {

     
    return 1;
}