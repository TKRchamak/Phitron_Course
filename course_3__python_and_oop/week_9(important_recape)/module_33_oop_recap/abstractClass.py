'''
    abstract method
    ---> abstract method k use kore kokhono object create kora jay na 
    ---> inheriut kore ai class k use korte hoy
    ---> abstract method k obossoi inherit kore class ao define korte hobe
'''
from abc import ABC, abstractmethod


class Vehicle(ABC):
    @abstractmethod
    def go(self):
        print('start running')


class Car(Vehicle):
    def __init__(self) -> None:
        super().__init__()

    def go():
        print('start running')

    def stop(self):
        print('running stop')


if __name__ == '__main__':
    # newClass = Vehicle() # this is not possible
    myCar = Car()
    myCar.stop()
