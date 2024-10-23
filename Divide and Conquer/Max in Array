def max(arr, low, high):
    if low == high:
        return arr[low]
    mid = (low + high) // 2
    
    max_left = max(arr, low, mid)
    max_right = max(arr, mid + 1, high)
    
    return max_left if max_left > max_right else max_right
    


arr = [2, 15, 1, 3, 1, 5, 8, 4]
print(max(arr, 0, len(arr)-1))