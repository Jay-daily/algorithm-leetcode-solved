

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            temp = arr[j]
            arr[j] = arr[i]
            arr[i] = temp

    temp = arr[high]
    arr[high] = arr[i + 1]
    arr[i + 1] = temp
    return i + 1


def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)


arr = [9,6,34,1,3,5,6,9,2,3,11,2,4,7]
low = 0
high = len(arr) - 1
quick_sort(arr, low, high)
print(arr)
