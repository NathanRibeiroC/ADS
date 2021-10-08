class Solution:
   def twoSum(nums, target):
        seen = {}
        for i, value in enumerate(nums): #1
           remaining = target - nums[i] #2
           
           if remaining in seen: #3
               return [i, seen[remaining]]  #4
           else:
               seen[value] = i  #
        return seen

a = [1,2,4]
t = 3

print(Solution.twoSum(a,t))