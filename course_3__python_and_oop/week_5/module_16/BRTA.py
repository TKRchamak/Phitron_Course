import random


class BRTA:
    def __init__(self) -> None:
        self.__license = {}

    def test_driving_test(self, email):
        score = random.randint(0, 100)

        if score > 33:
            print("congrats, you pass the exam")
            license_number = random.randint(11111, 99999)
            self.__license[email] = license_number
            return license_number
        else:
            print('sorry, you failed the exam')
            return False

    def valid_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
        return False


if __name__ == "__main__":
    # class Test:
    #     def __init__(self):
    #         self.x = 0

    # class Derived_Test(Test):
    #     def __init__(self):
    #         Test.__init__(self)
    #         self.y = 1

    # def main():
    #     b = Derived_Test()
    #     print(b.x, b.y)
    # main()

    from abc import ABC, abstractmethod

    class AbstractClass(ABC):
        @abstractmethod
        def some_method():
            pass

    ac = AbstractClass()

    print(ac)

    pass
