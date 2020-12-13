#Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

#For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        output = []
        max_candies = max(candies)
        print(max_candies)
        for i in candies:
            if (i+extraCandies) >= max_candies:
                output.append(True)
            else:
                output.append(False)
        return output
#https://leetcode.com/submissions/detail/430240198/