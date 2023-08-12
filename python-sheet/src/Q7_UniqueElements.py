def get_unique_elements(my_list):
    unique_list = []

    for element in my_list:
        if element not in unique_list:
            unique_list.append(element)

    return unique_list

list1 = [5, 7, 7, 8, 8, 8, 10]
print(list1)
another_list = get_unique_elements(list1)
print(another_list)