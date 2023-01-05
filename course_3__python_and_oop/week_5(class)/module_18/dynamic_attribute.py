class Item:
    all = []

    def __init__(self, item_name, item_price) -> None:
        self.__item_name = item_name
        self.__item_price = item_price
        self.all.append(self)

    def __repr__(self) -> str:
        return f"item {self.__item_name}, {self.__item_price}"


item1 = Item('bowl', 100)
item2 = Item('Bati', 40)
item1._Item__discount = '60%'

print(Item.all)
# print(item1.__dict__)
# print(item2.__dict__)
