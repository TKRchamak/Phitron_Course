class Aircraft:
    def __init__(self, make, code, typ, flight_range) -> None:
        self.make = make
        self.code = code
        self.typ = typ
        self.flight_range = float(flight_range)

    def get_make(self):
        return self.make

    def __repr__(self) -> str:
        return f'Aircraft make : {self.make}, code : {self.code}, type : {self.typ}, flight range : {self.flight_range}'
