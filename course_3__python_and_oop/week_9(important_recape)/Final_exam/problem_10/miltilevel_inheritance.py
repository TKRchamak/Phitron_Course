class Vehicle:
    def __init__(self, name) -> None:
        self.name = name


class Car(Vehicle):
    def __init__(self, name, seats) -> None:
        super().__init__(name)
        self.seats = seats


class AcCar(Car):
    def __init__(self, name, seats, type) -> None:
        super().__init__(name, seats)
        self.type = type
