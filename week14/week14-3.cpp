int comp(const void*p1, const void*p2){
    return *(int*)p1 - *(int*)p2;
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int),comp);
    ///���Ʀn,�ۦP���N�|��F�~
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]==nums[i+1]) return true;
    }///�p�G�F�~�O�ۦP��,�N���F!

    return false;///�S�����ۦP��
}
