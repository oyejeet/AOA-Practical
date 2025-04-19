def BinarySearch(arr, target):
  low = 0
  high = len(arr)-1
  
  while low <= high:
    mid = (low + high) // 2
    
    if(arr[mid] == target):
      return mid
    elif(arr[mid] < target):
      low = mid + 1
    elif(arr[mid] > target):
      high = mid - 1
   
  return -1

arr = [10,20,30,40,50,60,70]
target = 20

print(f"Sorted array is : {arr} and target is : {target}")
result = BinarySearch(arr,target)

if(result != -1):
  print(f"Target Element {target} found at index {result}")
else:
  print("Target element not found")
