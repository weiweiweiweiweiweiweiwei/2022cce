class KthLargest {
public:
    ///���D,�n��aK�j���Ʀr
    int k2;
    vector<int> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;///�ƥ��@�Uk
        for(int i=0; i<nums.size(); i++){
            all.push_back( nums[i] );

        }///�ƥ��n�����Ʀr
    }

    int add(int val) {
        all.push_back(val);
        sort(all.begin(), all.end());///�q�p��j�Ʀn(����S�Ĳv)
        ///�̪��K�j���Ʀr (�O��K2)
        return all[ all.size() - k2 ];
    }
};
