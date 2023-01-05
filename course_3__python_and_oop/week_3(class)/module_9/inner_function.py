''' functions are first class citizen '''
''' function can be define in a function '''
''' function can be return inside a function '''
''' function can be accept a function as a parameter '''


# def first():
#     print('this is first')


# def second(first):
#     print('this is second')
#     first()


# second(first)


# def third():
#     print('this is third')

#     def forth():
#         print('this is forth')

#     forth()


# third()


def third():
    print('this is third')

    def forth():
        print('this is forth')

    return forth


# get_func = third()
# get_func()

third()()
