class Calculator:
    def add(self, a, b):
        return a+b

    def subtract(self, a, b):
        return a-b

    def multiply(self, a, b):
        return a*b

    def divided(self, a, b):
        return a/b


my_calculator = Calculator()

sum = my_calculator.add(5, 10)
print(sum)
