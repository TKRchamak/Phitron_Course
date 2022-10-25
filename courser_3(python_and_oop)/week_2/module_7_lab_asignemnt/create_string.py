l = ["This", "is", "very", "fantastic"]


def create_string(given_Arr):
    c_string = ''

    for index, word in enumerate(given_Arr):
        if given_Arr[-1] == given_Arr[index]:
            c_string = c_string + word
        else:
            c_string = c_string + word + ' '

    print(c_string)


create_string(l)
