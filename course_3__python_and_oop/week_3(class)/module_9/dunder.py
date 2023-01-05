''' dander magic method '''
''' special method '''


class Person:
    def __init__(self, name, age, money) -> None:
        self.name = name
        self.age = age
        self.money = money

    def __call__(self):
        print(
            f'My name is : {self.name}, age : {self.age}, I have {self.money}')

    def __eq__(self, other):
        return self.age == other.age

    def __add__(self, other):
        return self.age + other.age  # __add__ is the dunder

    def __repr__(self) -> str:
        return f'name: {self.name}, age: {self.age}'


kodu = Person('kodu', 26, 400)
jodu = Person('Jodu', 36, 600)

jodu()

print(kodu + jodu)
print(jodu)
