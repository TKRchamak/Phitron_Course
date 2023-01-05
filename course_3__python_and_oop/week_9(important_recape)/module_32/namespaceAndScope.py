'''
    namespace and scope

    
    scope
    LEGB
    L----->local
    E----->Enclose(nested function)
    G----->Global
    B----->Builtin
    E >> L >> G >> B
'''

# namespace ---> same variable bivinno jaygay use kora jay and import koreo use kora jay

# s = 'i am global'


# def f():
#     print('i am local')


# f()
# print(s)


# enclose
s = 'i am global'


def outerFunction():
    s = 'i am local'

    def innerFunction():
        s = 'i am enclosed'
        print(s)
    innerFunction()
    print(s)


outerFunction()
print(s)
