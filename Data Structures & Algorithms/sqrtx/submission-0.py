class Solution:
    def mySqrt(self, x: int) -> int:
        left = 0
        right = x
        answer = 0

        while left <= right:
            midpoint = (left + right) // 2

            if midpoint * midpoint <= x:
                answer = midpoint
                left = midpoint + 1
            else:
                right = midpoint - 1
        
        return answer