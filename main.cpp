#include <iostream>
#include <unordered_map>
class Solution {
public:
    std::unordered_map<char,int> uMap = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
    };
    int romanToInt(std::string s) {
        int num = uMap.at(s.back());
        for( int i = s.length()-1; i >0 ; i--){

            if((i-1)>=0&& (uMap.at(s.at(i))>uMap.at(s.at(i-1)))){
                num -=uMap.at(s.at(i-1));
            }
            else{
                num += uMap.at(s.at(i-1));
            }
        }
        return num;
    }
};

int main(int argc, const char * argv[]) {
    Solution t;
    std::cout <<t.romanToInt(std::string("IV"));
    return 0;
}
