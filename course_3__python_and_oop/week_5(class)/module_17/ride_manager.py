class Ride_manager:
    def __init__(self) -> None:
        print('ride manager activated')
        self.__income = 0
        self.__trip_history = []
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

    def total_income(self):
        return self.__income

    def trip_history(self):
        return self.__trip_history

    def find_a_vehicle(self, rider, vehicle_type, destination):
        if vehicle_type == 'car':
            vehicles = self.__activateCars
        elif vehicle_type == 'bike':
            vehicles = self.__activateBikes
        else:
            vehicles = self.__activateCngs

        if (len(vehicles) == 0):
            print(f'Sorry, No {vehicle_type} available for this time')
            return False
        for vehicle in vehicles:
            if abs(rider.location - vehicle.driver.location) < 10:
                print('potential', vehicle.driver.location, rider.location)
                distance = (rider.location - destination)
                fare = distance * vehicle.rate
                if rider.balance < fare:
                    print('You dont have sufficient balance',
                          fare, rider.balance)
                    return False
                if vehicle.status == 'available':
                    vehicle.status = 'unavailable'
                    vehicles.remove(vehicle)
                    trip_info = f'match for {rider.name} for fare {fare} with {vehicle.driver.name} started from: {rider.location} to: {destination}'
                    rider.start_trip(fare, trip_info)
                    vehicle.driver.start_trip(
                        rider.location, destination, fare*0.8, trip_info)
                    self.__income += fare * 0.2
                    self.__trip_history.append(trip_info)
                    print(trip_info)
                    return True


uber = Ride_manager()
