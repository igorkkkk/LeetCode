#include <iostream>
#include <unordered_set>



class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::size_t tmp = magazine.find(ransomNote[0]);
        if (tmp != std::string::npos) {
            return canConstruct(ransomNote.erase(0,1), magazine.erase(tmp,1));
        }
        else {
            return !ransomNote.length();
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution t;

    std::string ransomNote = "aa";
    std::string magazine = "aab";
    std::cout <<t.canConstruct(ransomNote,magazine);
    return 0;
}
