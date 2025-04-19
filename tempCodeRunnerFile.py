def sum_of_subsets(nums, target, current=None, index=0, current_sum=0):
#     if current is None:     # current = None is a safety measure to prevent mutable default argument bugs where every time the function is called it will make use of a new list current[]
#         current = []

#     if current_sum == target:
#         print("Subset:", current)
#         return
#     if index >= len(nums) or current_sum > target:
#         return

#     # Include current element
#     sum_of_subsets(
#         nums, target,
#         current + [nums[index]],
#         index + 1,
#         current_sum + nums[index]
#     )

#     # Exclude current element
#     sum_of_subsets(
#         nums, target,
#         current,
#         index + 1,
#         current_sum
#     )

# # Test case
# nums = [10, 7, 5, 18, 12, 20, 15]
# target = 35
# sum_of_subsets(nums, target)