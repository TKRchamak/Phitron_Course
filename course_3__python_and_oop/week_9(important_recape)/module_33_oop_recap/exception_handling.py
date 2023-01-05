'''
    python Exception Handling
    syntax error vs exception

    try
    except
    else
    finally
'''
try:
    x = 10/4
    print(x)
except ZeroDivisionError:
    print('Zero Division error found')
except ValueError:
    print('Value Error found')
else:
    print('No error found, kono error na pele aita use hobe')
finally:
    print('i will be always print')
