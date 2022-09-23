#include <iostream>
#include <vector>
#include <numeric>

class Solution {
public:
    int pivotIndex(std::vector<int> &nums) {

        int left_sum = 0;
        int right_sum = std::accumulate(nums.begin(), nums.end(), 0);

        for (std::size_t i = 0; i < nums.size(); i++) {
            int current_val = nums[i];
            right_sum -= current_val;
            if (left_sum == right_sum) {
                return i;
            }
            left_sum += current_val;
        }
        return -1;
    }
};

int main(int argc, const char *argv[]) {
    Solution t;
    std::vector<int> nums = {-1, -1, -1, -1, -1, 1};
    std::cout << t.pivotIndex(nums);
    return 0;
}
