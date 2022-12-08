import csv
from Airport import Airport
from math import radians, sin, cos, atan2, sqrt


class All_airports:
    def __init__(self) -> None:
        self.airports = None
        self.load_airport_data('./data/airport.csv')

    def load_airport_data(self, file_path):
        airports = {}
        country_currency = {}
        country_rate = {}

        # country <-----> currency name
        with open('./data/countrycurrency.csv', 'r') as file:
            lines = csv.reader(file)
            header = next(lines)
            for line in lines:
                country_currency[line[0]] = line[1]
        file.close()

        # currency name <-----> rate
        with open('./data/currencyrates.csv', 'r')as file:
            lines = csv.reader(file)
            for line in lines:
                country_rate[line[1]] = line[2]
        file.close()

        with open(file_path, 'r', encoding="utf-8") as file:
            lines = csv.reader(file)
            try:
                for line in lines:
                    country = line[3]
                    currency = country_currency[country]
                    rate = country_rate[currency]
                    airports[line[4]] = Airport(
                        line[4], line[1], line[2], line[3], line[6], line[7], rate)
            except KeyError as e:
                print(e)
            self.airports = airports
            # for airport in airports.items():
            #     print(airport)

    def get_distance_between_two_airports(self, lat1, lon1, lat2, lon2):
        world_radius = 6371  # km
        lat_distance = radians(lat1 - lat2)
        lon_distance = radians(lon1 - lon2)

        a = (sin(lat_distance/2) * sin(lat_distance/2) +
             cos(radians(lat1)) * cos(radians(lat2)) *
             sin(lon_distance/2) * sin(lon_distance/2)
             )
        c = 2 * atan2(sqrt(a), sqrt(1-a))

        distance = world_radius * c
        return distance

    def distance_between_two_airports(self, airport1_code, airport2_code):
        airport1 = self.airports[airport1_code]
        airport2 = self.airports[airport2_code]
        distance = self.get_distance_between_two_airports(
            airport1.lat, airport1.lon, airport2.lat, airport2.lon)
        return distance

    def ticket_price(self, start, end):
        airport1 = self.airports[start]
        distance = self.distance_between_two_airports(start, end)
        fare = distance * airport1.rate
        return fare


world_tour = All_airports()
fare = world_tour.ticket_price('RIG', 'HEX')
print(fare)
