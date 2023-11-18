def maximo(arr: list):
    m = arr[1]
    for num in arr:
        if num > m:
            m = num
    return m




arr = [1,2,3,4,5,6,7,8,9]
print(maximo(arr))


