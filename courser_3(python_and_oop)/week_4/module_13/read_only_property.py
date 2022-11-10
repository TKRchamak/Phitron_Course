class Student:
    def __init__(self, id, name, marks) -> None:
        self.__id = id
        self.name = name
        self.marks = marks

    @property
    def student_id(self):  # student_id
        return self.__id

    @student_id.setter
    def student_id(self, value):  # student_id
        self.__id = value

    @student_id.deleter
    def student_id(self):  # student_id
        del self.__id


# create a student
chouwdhuri = Student(12, 'choudhuri', 80)
# print student id
print(chouwdhuri.student_id)

# set student id using setter
chouwdhuri.student_id = 20
print(chouwdhuri.student_id)

del chouwdhuri.student_id
print(dir(chouwdhuri))

chouwdhuri.student_id = 20
print(chouwdhuri.student_id)
