''' diamond ring problem is multiple inherit problem


'''


class A:
    def print_data(self):
        print('this is a')


class B:
    def print_data(self):
        print('this is b')


class C(B, A):  # multiple in heritance problem is give A first than that take A's function first
    pass


obj1 = A()
obj2 = B()
obj3 = C()

obj3.print_data()
