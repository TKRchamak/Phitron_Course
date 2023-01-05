class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age


class School:
    def __init__(self, name) -> None:
        self.school_Name = name


class Student(Person, School):
    def __init__(self, name, age, schoolName) -> None:
        Person.__init__(name, age)
        School.__init__(schoolName)
        self.profession = 'student'
