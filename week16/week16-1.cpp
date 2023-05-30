class MyHashSet {
public:
    int a[1000001];
    MyHashSet() {
        for(int i=0; i<=1000000; i++){
            a[i] = 0; ///沒有在裡面,空白
        }
    }

    void add(int key) {
        a[key] = 1; ///在裡面
    }

    void remove(int key) {
        a[key] = 0; ///不在裡面
    }

    bool contains(int key) {
        if(a[key]==1) return true;
        else return false;
    }
};
