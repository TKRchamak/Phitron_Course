class User:
    def __init__(self, name, age, password, mobile):
        self.name = name
        self.age = age
        self.__password = password
        self.__mobile = mobile


user1 = User('tonmoy', 26, 'tukutaki', '0179459821')

print(user1.__password)
