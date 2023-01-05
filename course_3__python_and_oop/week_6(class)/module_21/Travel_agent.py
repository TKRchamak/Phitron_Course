from All_airports import All_airports
from AirLines import AirLines
from Trip import Trip
from itertools import permutations


class TravelAgent:
    def __init__(self, name, ) -> None:
        self.name = name
        self.trips = None
        self.all_airports = All_airports()
        self.airlines = AirLines()
    '''
    params:
        start: start city code
        end: ending city code
        start_date: date when you start the trip

    return:
        aircraft, price
    '''

    def set_trip_one_city_one_way(self, start_city_code, end_city_code, start_date):
        price = self.all_airports.ticket_price(start_city_code, end_city_code)
        distance = self.all_airports.distance_between_two_airports(
            start_city_code, end_city_code)
        aircraft = self.airlines.get_aircraft_by_distance(distance)
        trip = Trip([start_city_code, end_city_code], aircraft,
                    price, start_date, [start_city_code, end_city_code])
        return trip

    '''
        trip_info : [city0, city1, city2] 
    '''

    def set_trip_one_city_round_way(self, start_city_code, end_city_code, start_date):
        trip1 = self.set_trip_one_city_one_way(
            start_city_code, end_city_code, start_date)
        trip2 = self.set_trip_one_city_one_way(
            end_city_code, start_city_code, start_date)
        return [trip1, trip2]

    '''
        trip_info : [city0, city1, city2] 
    '''

    def set_trip_two_city_one_way(self, trip_info, start_date):
        trip1 = self.set_trip_one_city_one_way(
            trip_info[0], trip_info[1], start_date)
        trip2 = self.set_trip_one_city_one_way(
            trip_info[1], trip_info[2], start_date)
        return [trip1, trip2]

    '''
        trip_info : [city0, city1, city2, .... , cityN]
    '''

    def set_trip_multi_city_one_way_fixed_route(self, trip_info, start_date):
        trips = []
        for i in range(0, len(trip_info)-1):
            trip = self.set_trip_one_city_one_way(
                trip_info[i], trip_info[i+1], start_date)
            trips.append(trip)
        return trips

    '''
        trip_info : [city0, city1, city2, .... , cityN]
    '''

    def set_trip_multi_city_flexible_route(self, trip_cities, start_date):
        start_city = trip_cities[0]
        # print(start_city)

        # 0 bad dia 1 theke suru and ses projonto
        flexible_cities = trip_cities[1:]
        min_price = float('inf')
        selected_trip = None

        for sequence in permutations(flexible_cities):
            flex_route = [start_city] + list(sequence)
            flex_routes_trips = self.set_trip_multi_city_one_way_fixed_route(
                sequence, start_date)
            price = 0
            for trip in flex_routes_trips:
                price += trip.cost
            if price < min_price:
                min_price = price
                selected_trip = flex_routes_trips
        return selected_trip, price

    def __repr__(self) -> str:
        return f'Travel agent : {self.name}'
