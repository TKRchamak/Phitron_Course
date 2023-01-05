def halfAdder(a, b):
    if (a == 0 and b == 0):
        return {'s': 0, 'c': 0}
    elif (a == 0 and b == 1):
        return {'s': 1, 'c': 0}
    elif (a == 1 and b == 0):
        return {'s': 1, 'c': 0}
    elif (a == 1 and b == 1):
        return {'s': 0, 'c': 1}


def test_halfAdder():
    res = halfAdder(1, 0)
    assert res != None


if __name__ == "__main__":
    res = halfAdder(2, 0)
    # if 's' in res and 'c' in res:
    if res == None:
        raise ('this not working properly')
    else:
        print(res)
