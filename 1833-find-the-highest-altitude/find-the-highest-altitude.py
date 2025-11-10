class Solution(object):
    def largestAltitude(self, gain):
        x=0
        y=0
        for i in gain:
            x+=i
            y=max(x,y)
        return y

        