class Student:
    def __init__(self, name, age, id):
        self.name = name
        self.age = age
        self.id = id


class Course:
    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher


class Teacher:
    def __init__(self, name, course):
        self.name = name
        self.course = course


class School:
    def __init__(self, name, courses, students, teachers):
        self.name = name
        self.courses = courses
        self.students = students
        self.teachers = teachers

    def get_students(self):
        for student in self.students:
            print(student.name)


school_name = 'Hibi Jibi Hibi Jibi'

student_1 = Student('Tonmoy', 26, 12)
student_2 = Student('Santo', 26, 14)
student_3 = Student('Taki', 27, 1)
student_4 = Student('Sejan', 27, 7)
student_5 = Student('Biplob', 29, 2)

course_1 = Course('Data Structure', 'Enayet')
teacher_1 = Teacher('Enayet', course_1)

course_2 = Course('Algorithom', 'Mojib')
teacher_2 = Teacher('Mojib', course_2)

courses = [course_1, course_2]
teachers = [teacher_1, teacher_2]
students = [student_1, student_2, student_3, student_4, student_5]


my_school = School(school_name, courses, teachers, students)

my_school.get_students()
