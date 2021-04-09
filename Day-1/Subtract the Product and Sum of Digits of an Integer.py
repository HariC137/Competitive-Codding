#Given an integer number n, return the difference between the product of its digits and the sum of its digits. 
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s = 0
        p = 1
        temp = n
        while (temp/10) > 0:
            s += int(temp%10)
            p *= int(temp%10)
            temp = int(temp/10)
        return (p-s)
        
#https://leetcode.com/submissions/detail/430228105/