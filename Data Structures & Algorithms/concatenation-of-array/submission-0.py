class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        duplicatedList = []
        k = 2
        for i in range(k):
            for i in range(len(nums)):
                duplicatedList.append(nums[i])

        return duplicatedList

        