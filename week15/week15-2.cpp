class KthLargest {
public:
    ///���D,�n��aK�j���Ʀr
    int k2;
    ///vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;///�ƥ��@�Uk
        for(int i=0; i<nums.size(); i++){
            all.push( nums[i] );
            if(all.size()>k2)all.pop();///�W�L�ƶq,�N��
        }///�ƥ��n�����Ʀr
    }

    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop();///�W�L�ƶq�N��
        /// sort(all.begin(), all.end());///�q�p��j�Ʀn(����S�Ĳv)
        ///�̪��K�j���Ʀr (�O��K2)
        return all.top(); ///return all[ all.size() - k2 ];
    }
};
