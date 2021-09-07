def func(a,b):
    ans = ""
    if len(a) != len(b):
        print("The two strings are different!")
        return
    else:
        for i in range(len(a)):
            ans += a[i]
            ans += b[i]
        return ans

print(func("hello","world"))
print(func("good","morning"))
print(func("master","slaves"))



