class School:
    ''' constructor '''

    def __init__(self, name, address, principle='') -> None:
        self.name = name
        self.address = address
        self.principle = principle
        self.grades = []

    def add_grade(self, name, teacher):
        new_grade = Grade(name, teacher)
        self.grades.append(new_grade)

    def delete_a_grade(self, name):
        idx = 0
        for index, grade in enumerate(self.grades):
            if grade.name == name:
                idx = index
        del self.grades[idx]


class Grade:
    def __init__(self, name, teacher) -> None:
        self.name = name
        self.teacher = teacher
        self.students = []

    def __repr__(self) -> str:
        return f"{self.name} with, Teacher {self.teacher}"

    def __del__(self):
        print(f'Deleting {self.name} with, Teacher {self.teacher}')


my_school = School('PLSCR', "Rangpur", "Noren")

my_school.add_grade('class_1', 'Ovy Hossain')
my_school.add_grade('class_2', 'Taki Kauser')
my_school.add_grade('class_3', 'Mahfuz Alom')

print(my_school.grades)
my_school.delete_a_grade('class_3')

print('--------------------------')
print('--------------------------')
print('--------------------------')
print('--------------------------')
