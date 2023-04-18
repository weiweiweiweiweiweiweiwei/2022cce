class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ///從1開始,因為要看前一格 nums[i-1]
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i] + nums[i-1];
            ///每一格,就是把前一格,加進來
        }

        return nums;
    }
};
