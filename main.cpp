#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <iterator>
#include <iomanip>
#include <chrono>



class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> mass;
        for(int i = 1;  i <=n; i++){

            if(i%3 == 0){
                mass.push_back("Fizz");
                if(i%5 == 0){
                    mass.back()+="Buzz";
                }
            }
            else if(i%5 == 0){
                mass.push_back("Buzz");
            }
            else{
                mass.push_back(std::to_string(i));
            }

        }
        return std::move(mass);
    }
};

int main(int argc, const char * argv[]) {
    Solution t;
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<std::string> v = t.fizzBuzz(15);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::microseconds>(stop - start);
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout<<"\n"<<duration.count();
    return 0;
}
