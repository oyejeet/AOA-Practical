def MergeSort(arr):
  if len(arr) <= 1:
    return arr
  mid = len(arr) // 2
  left = arr[:mid]
  right = arr[mid:]
  
  left = MergeSort(left)
  right = MergeSort(right)
  
  return Merge(left, right)
  
def Merge(left, right):
  new = []
  i,j = 0,0
  
  while (i < len(left) and j < len(right)):
    if left[i] < right[j]:
      new.append(left[i])
      i += 1
    else:
      new.append(right[j])
      j += 1
      
  new.extend(left[i:])
  new.extend(right[j:])
  return new
    
arr = [12,23,21,33,31]

sorted = MergeSort(arr)
print(f"Sorted Array is : {sorted}")
