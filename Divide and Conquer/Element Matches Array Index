def find_element_matching_array_index(arr, low, high):
    if low > high:
        return -1
    mid = (low + high) // 2
    if arr[mid] == mid:
        return mid
    elif arr[mid] > mid:
        return find_element_matching_array_index(arr, low, mid-1)
    else:
        return find_element_matching_array_index(arr, mid+1, high)
    

arr = [-10, -5, 2, 2, 3, 4, 5, 6, 7, 9]
print(find_element_matching_array_index(arr, 0, len(arr)-1))