# Leet code solution code in the local terminal:

# solution 1
# def twoSum(nums, target):
#     lens = len(nums)
#     j=-1
#     for i in range(lens):
#         if (target - nums[i]) in nums:
#             if (nums.count(target - nums[i]) == 1)&(target - nums[i] == nums[i]):#如果num2=num1,且nums中只出现了一次，说明找到是num1本身。
#                 continue
#             else:
#                 j = nums.index(target - nums[i],i+1) #index(x,i+1)是从num1后的序列后找num2                
#                 break
#     if j>0:
#         return [i,j]
#     else:
#         return []
# print (twoSum([2, 7, 11, 15], 22))




# solution 2
# LeetCode1.Two Sum两数之和(哈希表法)(Python可运行，带测试用例)
# https://blog.csdn.net/kkill_youokk_/article/details/117093626
#9.3.2. Class Objects
#https://docs.python.org/3/tutorial/classes.html
# class Student(object):
#     def __init__(self, name, score):
#         self.name = name
#         self.score = score

#     def get_grade(self):
#         if self.score >= 90:
#             return 'A'
#         elif self.score >= 60:
#             return 'B'
#         else:
#             return 'C'
        
# lisa = Student('Lisa', 99)
# bart = Student('Bart', 59)
# print(lisa.name, lisa.get_grade())
# print(bart.name, bart.get_grade())

# solution 3
    
# class Solution:
#   def twoSum(self,nums, target) :
#         n = len(nums)
#         # 枚举在数组中所有的两个不同的下标的组合
#         # 左闭右开，到n即可
#         for i in range(n):
#             for j in range(i + 1, n):
#                 if nums[i] + nums[j] == target:
#                     return [i, j]

#         return []

# l = Solution()
# print (l.twoSum([2, 7, 11, 15], 22))

# class Solution:
#     from typing import List
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         hashtable = dict()
#         for i, num in enumerate(nums):
#             if target - num in hashtable:
#                 return [hashtable[target - num], i]
#             hashtable[nums[i]] = i
#         return []
# l = Solution()
# print (l.twoSum([2, 7, 11, 15], 22))
    


# solution 4
# Python，告别Print？
# https://zhuanlan.zhihu.com/p/68217206
# import pysnooper

# @pysnooper.snoop()

# def number_to_bits(number):

#     if number:

#         bits = []

#         while number:

#             number, remainder = divmod(number, 2)

#             bits.insert(0, remainder)

#         return bits

#     else:

#         return [0]

# number_to_bits(6)