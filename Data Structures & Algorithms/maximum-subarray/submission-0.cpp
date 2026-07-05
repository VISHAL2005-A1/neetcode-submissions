class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxSum = INT_MIN;
        //  if(n==1) return nums[1];
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
    }
};
