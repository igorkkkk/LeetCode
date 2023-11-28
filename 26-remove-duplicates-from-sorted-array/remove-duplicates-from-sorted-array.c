int removeDuplicates(int* nums, int numsSize) {
    int move = 0;
    int unique = 1;
    for(int i = 0; i < numsSize-1; i++)
        if (nums[i] != nums[i+1]) {
            unique++;
            move++;
            nums[move]=nums[i+1];
        }
        return unique;

}