int duplicateNumbersXOR(int* nums, int numsSize) {
    int hash[50];
    int res = 0;
    int cur = 0;
    memset(hash,0,numsSize);
    for (int i = 0; i < numsSize; i++) {
        cur = nums[i];
        if (hash[cur-1])
            res ^= cur;
        else
            hash[cur-1] = cur;
    }

    return res;
}