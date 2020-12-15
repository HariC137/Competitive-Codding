#The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

#Given two integers x and y, calculate the Hamming distance.
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        b_x = 0
        b_y = 0
        ctr =0
        while((x>0) or (y>0)):
            b_x = int(x%2)
            b_y = int(y%2)
            if (b_x != b_y):
                ctr += 1
            x = int(x/2)
            y=  int(y/2)
        return ctr
#https://leetcode.com/submissions/detail/430237385/
                
            