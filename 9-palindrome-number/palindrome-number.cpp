class Solution {
public:
    bool isPalindrome(int x) {
        long long t = x, sum = 0;
        while(t){
            sum =t%10+sum*10;
            t /= 10;
        }
        return x>=0 ? (sum==x) : false;
    }
};