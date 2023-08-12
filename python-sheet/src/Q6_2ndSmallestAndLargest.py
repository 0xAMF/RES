def find_second_smallest(my_list):
    bubble_sort(my_list)
    return my_list[1]


def find_second_largest(my_list):
    bubble_sort(my_list)
    return my_list[len(my_list) - 2]


def bubble_sort(my_list):
    length = len(my_list)

    for i in range(length):
        for j in range(length - 1):
            if my_list[j] > my_list[j + 1]:
                my_list[j], my_list[j + 1] = my_list[j + 1], my_list[j]



list = [12, 23, 4, 1, 2, 44, 11, 25]
print(list)
second_smallest = find_second_smallest(list)
second_largest = find_second_largest(list)
print("The second smallest element = ", second_smallest)
print("The second largest element = ", second_largest)
