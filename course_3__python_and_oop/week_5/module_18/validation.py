class Person:
    def __init__(self, name, age, phone) -> None:
        assert age >= 18, f"Only 18+ are allowed for drink"
        assert len(phone) == 11, f"Phone number not valid"
        self.name = name
        self.age = age
        self.phone = phone

    def __repr__(self) -> str:
        return f"name: {self.name}, age: {self.age}, phone: {self.phone}"


me = Person("Tonmoy", 18, '01772536411')
print(me)
