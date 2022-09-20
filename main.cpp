#include <iostream>

class Solution {
public:
    int numberOfSteps(int num) {

        if (num != 0) {
            num % 2 == 0 ? num = num / 2 : num = num - 1;
            return 1 + numberOfSteps(num);
        }
        return 0;
    }
};

int main(int argc, const char *argv[]) {
    Solution t;
    std::cout << t.numberOfSteps(14);
    return 0;
}
