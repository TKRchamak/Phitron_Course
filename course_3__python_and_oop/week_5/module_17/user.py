import hashlib
from BRTA import BRTA
from vehecals import Car, Bike, Cng
from ride_manager import uber
from random import random, randint, choice
import threading

license_authority = BRTA()


class User_already_exists(Exception):
    def __init__(self, email, *args: object) -> None:
        super().__init__(*args)
        print(f'User {email} already exits')


class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        hash_pass = hashlib.md5(password.encode()).hexdigest()
        self.password = hash_pass

        already_exists = False
        with open('user_list.txt', 'r') as file:
            if email in file.read():
                already_exists = True
                # raise User_already_exists(email)

        if (not already_exists):
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
        self.__trip_history = []
        super().__init__(name, email, password)

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def request_trip(self):
        pass

    def start_trip(self, fare, trip_info):
        self.balance -= fare
        self.__trip_history.append(trip_info)


class Driver(User):
    def __init__(self, name, email, password, location, license=None) -> None:
        self.location = location
        self.license = license
        self.valid_driver = license_authority.valid_license(email, license)
        self.earn = 0
        self.__trip_history = []
        self.vehicle = None
        super().__init__(name, email, password)

    def take_drive_test(self):
        result = license_authority.test_driving_test(self.email)
        if result != False:
            self.license = result
            self.valid_driver = True
        else:
            self.license = None

    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                self.vehicle = Car(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, self.vehicle)

            elif vehicle_type == 'bike':
                self.vehicle = Bike(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, self.vehicle)

            else:
                self.vehicle = Cng(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicles(vehicle_type, self.vehicle)
        else:
            print('your are not a valid driver')

    def start_trip(self, start, destination, fare, trip_info):
        self.earn += fare
        self.location = destination
        # start thread
        trip_thread = threading.Thread(
            target=self.vehicle.start_driving, args=(start, destination, ))
        trip_thread.start()
        # self.vehicle.start_driving(start, destination)
        self.__trip_history.append(trip_info)


if __name__ == "__main__":

    # while (True):
    #     print(f'1. Add driver')
    #     print(f'2. Add rider')
    #     print(f'3. Add vehicles')

    # user_1 = User('Tonmoy', 'tonmoykumarroy6@gmail.com', 'TKRchamak@6')
    # User.log_in('tonmoykumarroy6@gmail.com', 'TKRchamak@6')

    # driver_1 = Driver('don', 'dom@gmail.com', 'don6don', 'dhaka', 5681)
    # print(driver_1.valid_driver)

    # driver_1.take_drive_test()

    # print(driver_1.valid_driver)

    # driver_1 = Driver('driver1', 'driver1@gmail.com',
    #                   'driver1', randint(10, 100), 54321)
    # driver_1.take_drive_test()
    # driver_1.register_a_vehicle('car', 12345, 5)

    # driver_2 = Driver('driver2', 'driver2@gmail.com',
    #                   'driver2', randint(10, 100), 54321)
    # driver_2.take_drive_test()
    # driver_2.register_a_vehicle('car', 62453, 5)

    # driver_3 = Driver('driver3', 'driver3@gmail.com',
    #                   'driver3', randint(10, 100), 54321)
    # driver_3.take_drive_test()
    # driver_3.register_a_vehicle('car', 45453, 5)

    for i in range(0, 50):
        driver = Driver(f'driver{i}', f'driver{i}@gmail.com',
                        f'driver{3}', randint(10, 99), randint(10000, 99999))
        driver.take_drive_test()
        driver.register_a_vehicle(
            choice(['car', 'bike', 'cng']), randint(10000, 99999), 5)

    rider_1 = Rider('rider_1', 'rider1@gmail.com',
                    'rider1', randint(10, 99), 1500)
    rider_2 = Rider('rider_2', 'rider2@gmail.com',
                    'rider_2', randint(10, 99), 1000)
    rider_3 = Rider('rider_3', 'rider3@gmail.com',
                    'rider_3', randint(10, 99), 1200)

    print(uber.get_available_cer())
    uber.find_a_vehicle(rider_1, 'car', 20)
    uber.find_a_vehicle(rider_2, 'bike', 40)
    uber.find_a_vehicle(rider_3, 'cng', 30)
