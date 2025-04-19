def InsertionSort(arr):
    n = len(arr)
    for i in range(1,n):
        key = arr[i]
        j = i - 1
        
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    
    return arr

arr = [12,66,125,9,24]
print(f"Original Array is {arr}")

sortedArray = InsertionSort(arr)
print(f"Sorted Array is : {sortedArray}")
