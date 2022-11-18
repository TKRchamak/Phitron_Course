import hashlib
from BRTA import BRTA
from vehecals import Car, Bike, Cng
from ride_manager import uber
from random import random, randint

license_authority = BRTA()


class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        hash_pass = hashlib.md5(password.encode()).hexdigest()
        self.password = hash_pass

        with open('user_list.txt', 'a') as file:
            file.write(f'{self.email} {self.password} \n')
        file.close()

        # print(f'{self.name}, user created successfully')

    @staticmethod
    def log_in(email, password):
        stored_password = ''
        with open('user_list.txt', 'r')as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    stored_password = line.split(' ')[1]
        file.close()

        if stored_password != '':
            hashed_pass = hashlib.md5(password.encode()).hexdigest()
            if hashed_pass == stored_password:
                print('user login successfully')
            else:
                print('Wrong password')
        else:
            print('Email not found')


class Rider(User):
    def __init__(self, name, email, password, location, balance) -> None:
        self.location = location
        self.balance = balance
        super().__init__(name, email, password)

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def request_trip(self):
        pass

    def start_trip(self, fare):
        self.balance -= fare


class Driver(User):
    def __init__(self, name, email, password, location, license) -> None:
        self.location = location
        self.license = license
        self.valid_driver = license_authority.valid_license(email, license)
        self.earn = 0
        super().__init__(name, email, password)

    def take_drive_test(self):
        result = license_authority.test_driving_test(self.email)
        if result != False:
            self.license = result
            self.valid_driver = True

    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                new_vehicle = Car(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, new_vehicle)

            elif vehicle_type == 'bike':
                new_vehicle = Bike(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, new_vehicle)

            else:
                new_vehicle = Cng(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, new_vehicle)
        else:
            print('your are not a valid driver')

    def start_trip(self, destination, fare):
        self.location = destination
        self.earn += fare


if __name__ == "__main__":

    # user_1 = User('Tonmoy', 'tonmoykumarroy6@gmail.com', 'TKRchamak@6')
    # User.log_in('tonmoykumarroy6@gmail.com', 'TKRchamak@6')

    # driver_1 = Driver('don', 'dom@gmail.com', 'don6don', 'dhaka', 5681)
    # print(driver_1.valid_driver)

    # driver_1.take_drive_test()

    # print(driver_1.valid_driver)

    rider_1 = Rider('rider_1', 'rider1@gmail.com',
                    'rider1', randint(111, 555), 500)
    rider_2 = Rider('rider_2', 'rider2@gmail.com',
                    'rider_2', randint(111, 555), 1000)

    driver_1 = Driver('driver1', 'driver1@gmail.com',
                      'driver1', randint(111, 444), 54321)
    driver_1.take_drive_test()
    driver_1.register_a_vehicle('car', 12345, 12)

    driver_2 = Driver('driver2', 'driver2@gmail.com',
                      'driver2', randint(111, 444), 54321)
    driver_2.take_drive_test()
    driver_2.register_a_vehicle('car', 62453, 12)

    print(uber.get_available_cer())
    uber.find_a_vehicle(rider_1, 'car', 20)
