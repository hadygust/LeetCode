class Solution:
    def pivotArray(self, nums: list[int], pivot: int) -> list[int]:
        listBelowPivot = []
        listEqualsPivot = []
        listAbovePivot = []

        for x  in nums:
            if x < pivot:
                listBelowPivot.append(x)
        
        for x  in nums:
            if x == pivot:
                listEqualsPivot.append(x)

        for x  in nums:
            if x > pivot:
                listAbovePivot.append(x)

        return listBelowPivot + listEqualsPivot + listAbovePivot
