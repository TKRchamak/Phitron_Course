class BankAccount:
    def __init__(self, owner, money) -> None:
        self.owner = owner
        self.__balance = money

    def get_balance(self):
        return self.__balance

    def deposit(self, money):
        self.__balance += money

    def withdrawal(self, money):
        self.__balance -= money


my_bank_account = BankAccount('Tonmoy', 100)

print(my_bank_account.get_balance())
my_bank_account.deposit(50)
print(my_bank_account.get_balance())
my_bank_account.withdrawal(50)
print(my_bank_account.get_balance())

# special case
print(dir(my_bank_account))
print(my_bank_account._BankAccount__balance)
