/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #define BUFFER_SIZE  1000
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    *returnSize = 0;

    int map[BUFFER_SIZE] = {0};

    int res_size =  (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* res = (int*)malloc(sizeof(int)*res_size);

    for (int i = 0; i < nums1Size; ++i)
        map[nums1[i]] = 1; // set occurances
    
    for (int i = 0; i < nums2Size; ++i)
        if (map[nums2[i]]){
            res[(*returnSize)++] = nums2[i];
            map[nums2[i]] = 0;
        }
    
    return res;
}