from turtle import bye


balance = 550


def bye_product(cost):
    global balance
    balance = balance-cost
    print(f'current balance : {balance}')


bye_product(30)
