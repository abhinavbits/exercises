def func(arr):
    count = {}
    for i in arr:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    ans = sorted(count.items(), key=lambda kv: (kv[1], kv[0]))
    print([j[0] for j in ans][::-1])


arr = [
    1, 1, 1, 2, 3, 4, 9, 0, 2, 2, 3, 4, 3, 2, 1, 5, 5, 9, 0, 0, 1, 1, 1, 1, 2,
    5, 6, 7, 7, 8, 9, 0, 0, 4, 4, 4, 6, 6, 6, 6, 6, 7, 7, 7
]
func(arr)