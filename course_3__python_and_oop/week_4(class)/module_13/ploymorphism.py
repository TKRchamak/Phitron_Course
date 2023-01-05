# poly --> many
# morph --> different
# parent class er method child class a child nijer ecce mot o use korte parbe aita i polymorphism

# 1. overriding
# 2. overloading


''' overriding '''


class Animal:
    def __init__(self, name) -> None:
        self.name = name

    def make_sound(self):
        print('no sound available for this animal')


class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('meow meow')


class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('Vouw vouw')


class Duck(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('Pak pak')


don = Cat('don')
# don.make_sound()

hulu = Dog('Hulu')

pak = Duck('Pak')

animals = [don, hulu, pak]

for animal in animals:
    animal.make_sound()
