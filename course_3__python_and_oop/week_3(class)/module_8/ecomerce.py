class Buyer:
    def __init__(self, name, card=[]):
        self.name = name
        self.card = card

    def add_items(self, item, price, quantity=1):
        self.card.append({'item': item, 'price': price, 'quantity': quantity})

    def item_list(self):
        for item in self.card:
            print(item['price'] * item['quantity'])


tonmoy = Buyer('Tonmoy')
tonmoy.add_items('pan', 10, 2)
tonmoy.add_items('mobile', 10000, 1)
tonmoy.add_items('pan', 10, 2)


print(tonmoy.name)
tonmoy.item_list()
