/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #define BUFFER_SIZE 1001
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = 0;

    int map[BUFFER_SIZE] = {0};

    int* res = (int*)malloc(sizeof(int)*BUFFER_SIZE);
    for (int i = 0; i < nums1Size; ++i)
        map[nums1[i]]++; // set occurances
    
    for (int i = 0; i < nums2Size; ++i)
        if (map[nums2[i]]){
            res[(*returnSize)++] = nums2[i];
            map[nums2[i]]--;
        }
    
    return res;
}