class Solution:
    def longestPalindrome(self, s: str) -> str:
        def max_pol(start,end):
            while start >= 0 and end < len(s) and s[start] == s[end]:
                start-=1
                end+=1
            return s[start+1:end]
        pol = ''
        for i in range(len(s)):
            t1 = max_pol(i,i)
            t2 = max_pol(i,i+1)
            if len(pol)<len(t1):
                pol = t1
            if len(pol)<len(t2):
                pol = t2
        return pol