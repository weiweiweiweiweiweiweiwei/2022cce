class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ///�q1�}�l,�]���n�ݫe�@�� nums[i-1]
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i] + nums[i-1];
            ///�C�@��,�N�O��e�@��,�[�i��
        }

        return nums;
    }
};
