class Solution():
    def maxProduct(nums):
        first, second = -1000000, -1000000
        for number in nums:
            if number > first:
                # update first largest and second largest
                first, second = number, first    
            else:
                # update second largest
                second = max( number, second)
        return first, second
        

a = [1,2,3,0,-1,-2,-3]

fst, scnd = Solution.maxProduct(a)

print(fst)
print(scnd)

