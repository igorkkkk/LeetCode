class Solution:
    def checkRecord(self, s: str) -> bool:
        abscent = 0
        late = 0
        max_late = 0
        for c in s:
            if c == 'A':
                abscent+=1
            if c == 'L':
                late+=1
            else:
                late = 0
            if max_late < late:
                    max_late = late
        
        return abscent < 2 and max_late < 3

        

