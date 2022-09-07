#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <numeric>



class Solution {
public:
    std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
        std::multimap<int,int> bin_map;
        std::vector<int> return_vec(0);
        for(int i = 0; i < mat.size(); i++){
            bin_map.insert(std::pair(std::accumulate(mat[i].begin(),mat[i].end(),0),i));
        }
        auto itb = bin_map.begin();
        for(int i = 0; i < k; i++,itb++){
            return_vec.push_back(itb->second);
        }
        return return_vec;
    }
};

int main(int argc, const char * argv[]) {
    Solution t;
    std::vector<std::vector<int>> mat = {{1,1,0,0,0},
                                         {1,1,1,1,0},
                                         {1,0,0,0,0},
                                         {1,1,0,0,0},
                                         {1,1,1,1,1}};
    std::vector<int> test = t.kWeakestRows(mat,3);
    std::copy(test.begin(), test.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
