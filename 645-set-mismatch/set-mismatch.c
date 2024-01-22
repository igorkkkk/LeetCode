/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(2 * sizeof(int));
    int* hash = (int*)calloc(numsSize + 1, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
        if (hash[nums[i]] == 2)
            res[0] = nums[i]; 
    }
        
    for (int i = 1; i <= numsSize; i++)
        if (hash[i] == 0) {
            res[1] = i;
            break;
        }
    
    free(hash);
    *returnSize = 2;
    return res;  
}