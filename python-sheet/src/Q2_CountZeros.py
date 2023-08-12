def zerocounter(number):
    numstring = str(number)
    count = 0
    for char in numstring:
        if char == '0':
            count = count + 1
    return count


num = int(input("Enter a number: "))
print("This number has ", zerocounter(num), " Zeros")
