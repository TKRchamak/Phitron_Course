class Ride_manager:
    def __init__(self) -> None:
        print('ride manager activated')
        self.__activateCars = []
        self.__activateBikes = []
        self.__activateCngs = []

    def add_a_vehicles(self, vehicle_type, vehicle):
        if vehicle_type == 'car':
            self.__activateCars.append(vehicle)
        elif vehicle_type == 'bike':
            self.__activateBikes.append(vehicle)
        else:
            self.__activateCngs.append(vehicle)

    def get_available_cer(self):
        return self.__activateCars

    def find_a_vehicle(self, rider, vehicle_type, destination):
        if vehicle_type == 'car':
            if (len(self.__activateCars) == 0):
                print('Sorry, no car is available for this time')
                return False
            for car in self.__activateCars:
                print('potential', car.driver.location, rider.location)


uber = Ride_manager()
