from abc import ABC, abstractmethod
from time import sleep


class Vehicle(ABC):
    speed = {
        'car': 30,
        'bike': 50,
        'cng': 16
    }

    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        self.vehicle_type = vehicle_type
        self.rate = rate
        self.driver = driver
        self.license_plate = license_plate
        self.speed = self.speed[vehicle_type]
        self.status = 'available'

    @abstractmethod
    def start_driving(self, start, destination):
        self.status = 'unavailable'
        print(f'{self.vehicle_type} {self.license_plate} started')
        distance = abs(start - destination)
        for i in range(0, distance):
            sleep(0.1)
            print(
                f'Driving: {self.license_plate} current position {i} of {distance}')
        self.trip_finished()

    @abstractmethod
    def trip_finished(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self, start, destination):
        return super().start_driving(start, destination)

    def trip_finished(self):
        self.status = 'available'
        print(f'{self.vehicle_type} {self.license_plate} completed trip')


class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self, start, destination):
        return super().start_driving(start, destination)

    def trip_finished(self):
        self.status = 'available'
        print(f'{self.vehicle_type} {self.license_plate} completed trip')


class Cng(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(vehicle_type, license_plate, rate, driver)

    def start_driving(self, start, destination):
        return super().start_driving(start, destination)

    def trip_finished(self):
        self.status = 'available'
        print(f'{self.vehicle_type} {self.license_plate} completed trip')


if __name__ == '__main__':
    my_bike = Bike('bike', 65154, 120, 'Tonmoy')

    print(my_bike.status)
    my_bike.start_driving()
    print(my_bike.status)
    my_bike.trip_finished()
    print(my_bike.status)
