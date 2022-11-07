class Bank:
    def __init__(self, money, name):
        self.name = name
        self.balance = money
        self.minimum_withdrawal = 100
        self.max_withdrawal_limit = 10000

    def get_balance(self):
        return f'Your current balance : {self.balance}'

    def deposit(self, money):
        self.balance = self.balance + money
        self.get_balance()

    def withdrawal(self, money=2900):
        if (self.balance < money):
            return f'No enough money'
        elif (self.minimum_withdrawal > money):
            return f'Minimum transaction limit : {self.minimum_withdrawal}'
        elif (self.max_withdrawal_limit < money):
            return f'Maximum transaction limit : {self.max_withdrawal_limit}'
        else:
            self.balance = self.balance - money
            return f'Take your money : {money}'


my_bank = Bank(1000, 'Prime')
curr = my_bank.get_balance()
print(curr)

my_bank.deposit(5000)
curr = my_bank.get_balance()
print(curr)

status = my_bank.withdrawal()
print(status)

get = my_bank.get_balance()
print(get)
