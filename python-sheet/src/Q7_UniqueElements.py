def get_unique_elements(my_list):
    unique_list = []
    length = len(my_list)

    for i in range(length):
        for j in range(length):
           if my_list[j] != my_list[i]:
                unique_list[j] = my_list[j]
           else:
               unique_list[j] = 0


list = [5, 7, 7, 8, 8, 8, 10]
another_list = get_unique_elements(list)
print(another_list)