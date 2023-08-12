strings = ["Hello", "world"]

first_half = ""
second_half = ""
first_half_list = []
second_half_list = []

for string in strings:
    half_length = int(len(string) / 2)
    first_half = string[:half_length]
    second_half = string[half_length:]
    first_half_list.append(first_half)
    second_half_list.append(second_half)

print("First half: ", first_half_list)
print("Second half: ", second_half_list)