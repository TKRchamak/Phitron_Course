class Calculator:
    def __init__(self, var1, var2):
        self.var1 = var1
        self.var2 = var2

    def sum(self):
        return self.var1 + self.var2

    def pow(self):
        return pow(self.var1, self.var2)


if __name__ == "__main__":
    newClass = Calculator(4, 3)

    res = newClass.sum()
    res2 = newClass.pow()
    print(res, res2)
