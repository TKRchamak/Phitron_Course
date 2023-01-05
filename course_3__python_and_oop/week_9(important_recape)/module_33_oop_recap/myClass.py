'''
    @ ----> decorator
    Instance method
    static method
    class method
'''


class School:
    school_name = 'ABC school'  # class variable

    def __init__(self, name) -> None:  # self --->object
        self.name = name  # instance variable

    def printName(self):  # instance method
        print(self.name)

    @classmethod  # class method, decorator
    def changeSchoolName(cls):  # cls --->class
        cls.school_name = 'change school name'

    @staticmethod  # cls/class or self/object/instance kono kichu kei access korte pare na, use as a normal function
    def greet():
        print('say hello')


if __name__ == '__name__':
    s = School('new')
    print(s.school_name)
    s.changeSchoolName()
    print(s.school_name)
