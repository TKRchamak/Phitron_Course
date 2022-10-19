def full_name(fast_name, last_name):
    print(fast_name)
    print(last_name)
    fullName = f'{fast_name} {last_name}'
    print(fullName)


# full_name(fast_name="Tonmoy", last_name="Kumar")


def long_name(fast_name, last_name, **kArgs):
    print(fast_name)
    print(last_name)
    fullName = f'{fast_name} {last_name}'
    # print(fullName)
    print(kArgs)


long_name(fast_name="Tonmoy", last_name="Roy", middle_name="Kumar")


def all_type(name, *args, **kArgs):
    print(name)
    print(*args)
    for key, value in kArgs.items():
        print(f'{key} : {value}')


all_type("tonmoy", 10, 15, "type", age=20, address="dhaka", student="yes")
