class User:
    def __init__(self, first, last) -> None:
        self.first = first
        self.last = last
        self.email = f'{first}{last}@user.com'

    @property
    def full_name(self):
        return f'{self.first} {self.last}'

    @full_name.setter
    def full_name(self, value):
        # first = value.split(' ')[0]
        # last = value.split(' ')[1]
        first, last = value.split(' ')
        self.first = first
        self.last = last

    @full_name.deleter
    def full_name(self):
        del self.first
        del self.last


user1 = User('tonmoy', 'kumar')
print(user1.full_name)
user1.full_name = 'Puskar Kumar'
print(user1.full_name)
del user1.full_name
# print(user1.full_name)
