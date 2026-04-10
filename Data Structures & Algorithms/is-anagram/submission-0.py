class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # If the length's are not equal then leave automatically
        if len(s) != len(t):
            return False;
        
        return sorted(s) == sorted(t)
        