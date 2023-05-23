class KthLargest {
public:
    ///セ肈,璶тK计
    int k2;
    ///vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;///称k
        for(int i=0; i<nums.size(); i++){
            all.push( nums[i] );
            if(all.size()>k2)all.pop();///禬筁计秖,碞メ
        }///称场计
    }

    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop();///禬筁计秖碞メ
        /// sort(all.begin(), all.end());///眖逼(ゑ耕⊿瞯)
        ///程材K计 (癘ΘK2)
        return all.top(); ///return all[ all.size() - k2 ];
    }
};
