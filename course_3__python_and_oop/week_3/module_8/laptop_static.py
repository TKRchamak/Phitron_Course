class Laptop:
    def __init__(self, name, color, age):
        self.name = name
        self.color = color
        self.age = age

    def increase_age(self, inc_age=1):
        self.last_age = self.age
        self.age = self.age + inc_age

    def repair(self, life_increase=-2):
        self.increase_age(life_increase)


my_laptop = Laptop('HP', 'silver', 4)
my_laptop.repair()

print(my_laptop.age)
print(my_laptop.__dict__)
