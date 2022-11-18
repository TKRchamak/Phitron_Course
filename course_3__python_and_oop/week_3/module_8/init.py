class Phone:
    manufactured = 'China'

    def __init__(self, brand, color, price) -> None:
        self.brand = brand
        self.color = color
        self.price = price

    def send_sms(self, number, text):
        return f'sending "{text}" to {number}'


my_phone = Phone('Google', 'GoldenRose', 45000)
sms = my_phone.send_sms('01558968484', 'Hay, how are you')

print(my_phone.brand)
print(sms)
