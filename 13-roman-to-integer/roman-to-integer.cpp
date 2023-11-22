class Solution {
public:
    unordered_map<char,int> map = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int romanToInt(string s) {
        int num = map.at(s.back());
        for( int i = s.length()-1; i >0 ; i--){
            
            if((i-1)>=0&& (map.at(s.at(i))>map.at(s.at(i-1)))){
                num -=map.at(s.at(i-1));
            }
            else{
                    num += map.at(s.at(i-1));
            }
        }
        return num;
    }
};