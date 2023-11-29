int fastSum(int* nums, int numsSize) {
    int* pStart = nums;
    int* pEnd = nums + numsSize-1;

    int sum = 0;
    while (pStart <= pEnd) {
        sum += *pStart;
        if(pStart != pEnd)
            sum += *pEnd;
        pStart++;
        pEnd--;
    }
    return sum;
}

int missingNumber(int* nums, int numsSize) {
    return ((numsSize+1)*numsSize) / 2 - fastSum(nums, numsSize);
}
