class Vehicle:
    def __init__(self, name, license, price) -> None:
        self.name = name
        self.license = license
        self.price = price
        print('this is Vehicle')


class Bus(Vehicle):
    def __init__(self, name, license, price,  seat, ticket_price) -> None:
        super().__init__(name, license, price)
        self.seat = seat
        self.available_seat = seat
        self.ticket_price = ticket_price
        print('this is Bus')

    def sell_ticket(self, customer_name, quantity, amount):
        self.available_seat -= quantity
        remainder = amount - self.ticket_price*quantity
        if remainder > 0:
            return Ticket(customer_name)
        return 'no ticket for you'


class Ticket:
    def __init__(self, owner) -> None:
        self.owner = owner


class ACBuss(Bus):
    def __init__(self, name, license, price, seat, ticket_price) -> None:
        super().__init__(name, license, price, seat, ticket_price)
        print('this is Ac Bus')


ac = ACBuss('SR', 'DHK-2451', 1200000, 40, 1200)

print(ac.name)
