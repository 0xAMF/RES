def factorial(number):
    if number == 1 or number == 0:
        return 1
    else:
        return number * factorial(number - 1)


n = int(input("Enter a number: "))
result = factorial(n)
print("result = ", result)
