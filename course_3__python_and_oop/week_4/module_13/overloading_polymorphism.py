# method overloading
def sum(num1, num2, num3=0, num4=0):
    return num1+num2+num3+num4


print(sum(4, 5))
print(sum(4, 5, 6, 7))


def sum_a(*args):
    res = 0
    for arg in args:
        res += arg
    return res


sum_a(4, 10, 50)


def sum_kw(**Kwargs):
    print(Kwargs)


sum_kw(b=0, c=9, d=5)

# operator overloading


class Person:
    def __init__(self, name, balance) -> None:
        self.name = name
        self.__balance = balance

    def __add__(self, other):
        return self.__balance + other.__balance

    def __eq__(self, __o: object) -> bool:
        return self.__balance == __o.__balance


person1 = Person('taki', 12000)
person2 = Person('ORts', 2000)

print(person1 + person2)
