def print_lucky_numbers(a, b):
    lucky_numbers = []
    for i in range(a, b):
        strnum = str(i)
        if strnum == '7' or strnum == '4':
            lucky_numbers.append(i)
    if not lucky_numbers:
        lucky_numbers = -1
    return lucky_numbers


print("8 --> 15:  ", print_lucky_numbers(8, 15))
print("4 --> 20:  ", print_lucky_numbers(4, 20))
