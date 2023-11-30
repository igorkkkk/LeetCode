int comp (const int *i, const int *j);

int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof (int), ( int(*) (const void *, const void *)) comp);

    int count = 0;
    for(int i = 0; i < numsSize-1; i++){
        if(nums[i] != nums[i+1]){
            count++;
            if (count == 2)
                return nums[i+1];
        }
    }
    return nums[0];
}

int comp (const int *a, const int *b)
{
    if (*a > *b) 
        return -1;
    else if (*a < *b) 
        return 1; 
    else 
        return 0; 
}
