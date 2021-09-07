def calc_max(arr):
    maxi = arr[0]
    for item in arr:
        if item > maxi:
            maxi = item
    return maxi


def calc_min(arr):
    mini = arr[0]
    for item in arr:
        if item < mini:
            mini = item
    return mini


def calc_sum(arr):
    total = 0
    for item in arr:
        total += item
    return total


def calc_avg(arr):
    total = calc_sum(arr)
    length = 0
    for _ in arr:
        length += 1
    return total / length


def func(**kwargs):
    input_val = [value for key, value in kwargs.items() ]
    action = input_val.pop()
    if action=='sum':
        return calc_sum(input_val)
    if action=='avg':
        return calc_avg(input_val)
    if action=='max':
        return calc_max(input_val)
    if action=='min':
        return calc_min(input_val)

print(func(x=100,y=200,z=150,a=300,b=180,e=90,f=25,g=80,h=120,action="avg"))

print(func(x=100,y=200,z=150,a=300,b=180,e=90,f=25,g=80,h=120,action="sum"))

print(func(x=100,y=200,z=150,a=300,b=180,e=90,f=25,g=80,h=120,action="max"))

print(func(x=100,y=200,z=150,a=300,b=180,e=90,f=25,g=80,h=120,action="min"))
    


