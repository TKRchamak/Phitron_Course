class Employee:
    def __init__(self, id, name, age, salary, position) -> None:
        self.id = id
        self.name = name
        self.age = age
        self.salary = salary
        self.position = position


class Developer(Employee):
    def __init__(self, id, name, age, salary, position, tech, focus) -> None:
        super().__init__(id, name, age, salary, position)
        self.tech = tech
        self.focus = focus


class TechLead(Employee):
    def __init__(self, id, name, age, salary, position, team, focus) -> None:
        super().__init__(id, name, age, salary, position)
        self.area_of_work = focus
        self.team = team
