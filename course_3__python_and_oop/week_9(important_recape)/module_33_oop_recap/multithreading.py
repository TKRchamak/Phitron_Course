'''
    separate flow of execution ---> multithread

'''
from time import sleep, perf_counter
from threading import Thread


def f1():
    for i in range(5):
        print(f"f1 - {i}")


def f2():
    for i in range(5):
        print(f"f2 - {i}")


def f3():
    for i in range(5):
        print(f"f3 - {i}")


def f4():
    for i in range(5):
        print(f"f4 - {i}")


th1 = Thread(target=f1)
th2 = Thread(target=f2)
th3 = Thread(target=f3)
th4 = Thread(target=f4)

th1.start()
th2.start()
th3.start()
th4.start()

th1.join()
th2.join()
th3.join()
th4.join()


# def task1():
#     for i in range(5):
#         print(f'this is {i}')
#         sleep(1)


# def task2():
#     for i in range(5, 10):
#         print(f'this is new {i}')
#         sleep(1)


# start_time = perf_counter()

# t1 = Thread(target=task1)
# t2 = Thread(target=task2)
# t1.start()
# t2.start()
# t1.join()
# t2.join()

# end_time = perf_counter()

# print(end_time - start_time)
