def array_sum(n, my_list):
    sum = 0
    for i in range(0, n):
        sum += my_list[i]
    return sum


my_list = [1, 2, 3, 4, 5]
print(my_list)
print("The sum of the first 3 elements = ", array_sum(3, my_list))
print("The sum of the first 4 elements = ", array_sum(4, my_list))
