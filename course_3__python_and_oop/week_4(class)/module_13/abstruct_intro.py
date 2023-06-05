# abstract base class
''' __ use to create private variable 
    __name is a private variable

    if parent class variables or method must be used for child than use
        @abstractmethode
        def func

    getter use to access private variable
        @property
        def func

    abstract class dose not make any instance,
    it use like a model for child class,

    abs method are must be declare in inherit class

    setter use to change private variable
        @property.setter --> @func.setter
'''
from abc import ABC, abstractmethod


class Animal(ABC):
    @abstractmethod
    def move(self):
        # print('I am movie everywhere')
        raise NotImplementedError

    def clam(self):
        print('I can clam on tree')


class Monkey(Animal):
    def __init__(self) -> None:
        self.__name = 'chamak'  # private variable __name

    # getter
    @property
    def name(self):
        return self.__name

    # setter
    @name.setter
    def name(self, value):
        self.__name = value

    def sing(self):
        print('he can sing')

    # def move(self):
    #     super().move()


puku = Monkey()
puku.name = "Tonmoy"  # set value using setter function
print(puku.name)
puku.move()
