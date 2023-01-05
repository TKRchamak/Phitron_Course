class Person:
    def __init__(self) -> None:
        pass


class Student(Person):
    def __init__(self, id, name, marks) -> None:
        self.__id = id
        self.name = name
        self.marks = marks


chouwdhuri = Student(12, 'choudhuri', 80)


print(issubclass(Student, Person))
print(isinstance(chouwdhuri, Student))
print(isinstance(chouwdhuri, Person))
