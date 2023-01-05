class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age


class Student(Person):
    def __init__(self, name, age) -> None:
        super().__init__(name, age)
        self.profession = 'student'
