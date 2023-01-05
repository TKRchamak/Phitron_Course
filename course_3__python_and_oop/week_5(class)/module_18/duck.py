class Teacher:
    def __init__(self, name) -> None:
        self.name = name
        self.students = []

    def add_students(self, studentObj):
        self.students.append(studentObj)

    def __repr__(self) -> str:
        return f'{self.students}'


class Student:
    def __init__(self, name) -> None:
        self.name = name

    # def add_under_this_teacher(self, teacherObj):
    #     teacherObj.students.append(self)

    def add_under_this_teacher(self, teacherObj):
        teacherObj.add_students(self)


mojid = Teacher('md mojid')
shanto = Student('shanto')
shanto.add_under_this_teacher(mojid)

print(mojid)
