class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        res = set()
        for email in emails:
            local, domain = email.split("@")
            ch = ""
            for c in local:
                if c == ".":
                    continue
                if c == "+":
                    break
                ch+=c
            res.add(ch+"@"+domain)
        return len(res)
