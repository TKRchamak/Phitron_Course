import csv
from Aircraft import Aircraft


class AirLines:
    def __init__(self, ) -> None:
        self.air_craft = None
        self.load_air_craft_data('./data/aircraft.csv')

    def load_air_craft_data(self, file_path):
        air_craft = {}
        with open(file_path, 'r') as file:
            lines = csv.reader(file)
            next(lines)
            for line in lines:
                air_craft[line[0]] = Aircraft(
                    line[3], line[0], line[1], line[4])
        file.close()

        self.air_craft = air_craft

    def get_aircraft(self, aircraft_code):
        return self.air_craft[aircraft_code]

    def get_aircraft_by_distance(self, distance):
        for aircraft in self.air_craft.values():
            if float(aircraft.flight_range) < distance:
                return aircraft


AirLines()
