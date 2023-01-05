import json


class Item:
    all = []

    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
        self.all.append(self)

    @staticmethod
    def read_json():
        with open('product_list.txt', 'r') as file:
            data = file.read()
            js = json.loads(data)

        for item in js:
            Item(
                name=item["name"],
                price=item["price"]
            )

    def __repr__(self) -> str:
        return f'{self.name}---->{self.price}'


Item.read_json()

print(Item.all)
