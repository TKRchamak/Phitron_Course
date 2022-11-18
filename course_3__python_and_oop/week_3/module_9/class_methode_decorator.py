class Customer:
    mall = 'bosumdhara'
    opening = 9

    def __init__(self, name):
        self.name = name
        self.card = []

    def openingHour(cls, day):  # class method
        return cls.mall

    @staticmethod
    def get_total(x, y):
        return x+y

    def add_item(self, item, quantity, price):
        self.card.append({'item': item, 'quantity': quantity, 'price': price})


res = Customer.get_total(5, 6)
print(res)


customer1 = Customer('tonmoy')
res2 = customer1.get_total(5, 7)
print(res2)
