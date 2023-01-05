import random


class BRTA:
    def __init__(self) -> None:
        self.__license = {}

    def test_driving_test(self, email):
        score = random.randint(0, 100)

        if score > 33:
            # print("congrats, you pass the exam")
            license_number = random.randint(11111, 99999)
            self.__license[email] = license_number
            return license_number
        else:
            # print('sorry, you failed the exam')
            return False

    def valid_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
        return False


if __name__ == "__main__":
    class A:
        def __init__(self):
            self.multiply(15)

        def multiply(self, i):
            self.i = 4 * i

    class B(A):
        def __init__(self):
            super().__init__()
            print(self.i)

        def multiply(self, i):
            self.i = 2 * i
    obj = B()

    pass
