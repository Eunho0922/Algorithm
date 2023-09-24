def quick_sort(left, right):
    if left < right:
        q = partition(left, right)
        quick_sort(left, q-1)
        quick_sort(q+1, right)

def partition(left, right):
    pivot = num_list[right]  
    i = left - 1

    for j in range(left, right):
        if num_list[j] <= pivot:
            i += 1
            num_list[i], num_list[j] = num_list[j], num_list[i]

    num_list[i+1], num_list[right] = num_list[right], num_list[i+1]
    return i + 1

num_list = list(map(int, input().split()))

n = len(num_list)
quick_sort(0, n - 1)

for i in range(n):
    print(num_list[i], end=" ")
