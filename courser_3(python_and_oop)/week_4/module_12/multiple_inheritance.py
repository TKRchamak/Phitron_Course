class School:
    def __init__(self, name, ) -> None:
        self.school_Name = name


class Grade:
    def __init__(self, name) -> None:
        self.grade_name = name


class SportsTeam:
    def __init__(self, sport_name) -> None:
        self.sport = sport_name
        self.team = []

    def add_player(self, student_name):
        self.team.append(student_name)


class Student(School, Grade, SportsTeam):
    def __init__(self, name, school_Name, grade_name, sport_name) -> None:
        School.__init__(self, school_Name)
        Grade.__init__(self, grade_name)
        SportsTeam.__init__(self, sport_name)
        self.name = name


supu = Student('Suparna', 'Cummila Girls College', 'O_level', 'dariabanda')
supu.add_player(supu.name)
print(supu.name, supu.grade_name)
print(supu.team)
