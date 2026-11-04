class Solution(object):
    def maxArea(self, height):
        left = 0
        right = len(height) - 1
        arr = []
        for x in range(len(height)):
            maxHeight = 0
            if height[left] < height[right]:
                maxHeight = height[left]
                left += 1
            else:
                maxHeight = height[right]
                right -= 1

            arr.append(maxHeight * (right - left + 1))
        return  max(arr)
            
