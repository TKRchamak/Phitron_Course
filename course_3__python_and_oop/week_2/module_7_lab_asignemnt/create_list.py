# x = {'a': 1, 'b':  2, 'c': 3, 'd': 4}
# output = ['a', 1, 'b',  2, 'c', 3, 'd', 4]

d = {'!': 1, '@': 2, '#': 3, '$': 4, '%': 5, '^': 6}


def create_list(dec):
    output = []
    all_keys = dec.keys()
    for key in all_keys:
        output.append(key)
        output.append(dec[key])

    print(output)


create_list(d)
