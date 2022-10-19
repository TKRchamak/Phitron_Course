def add(num1=1, num2=1):  # set parameter's default value
    total = num1+num2
    print(total)


add()  # for the default value if give no parameter than that take the default value
add(5, 4)  # its normal call
add(num2=5, num1=3)  # you can set parameter value individual


# for unpredictable parameter use args

def multiply(*numbers):
    print(numbers)


multiply(12, 5, 4, 6, 7)


def multiply2(num1, num2, *number):
    print(num1)
    print(num2)
    print(number)


multiply2(12, 5, 4, 6, 7)
