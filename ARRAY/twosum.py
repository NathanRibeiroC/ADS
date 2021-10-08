class Solution:
   def twoSum(nums, target):
        seen = {}
        for i, value in enumerate(nums): 
           remaining = target - nums[i] 
           
           if remaining in seen: 
               return [i, seen[remaining]]  
           else:
               seen[value] = i  
        return seen

a = [4,5,6,7,8,1,2]
t = 3

print(Solution.twoSum(a,t))