def sum_ood(n, total):
    for i in range(1, n+1):
        if i % 2 == 0:
            pass
        else:
            total += i
    print(total)


def max(l, n):
    if len(l) > 0:
        for i in l:
            if i > n:
                n = i
        return n
    else:
        return n


def mylen(l, n):
    pass


if __name__ == '__main__':
    # sum_ood(5, 0)

    arr = [12, 13, 45, 0, 78]
    print(max(arr, 0))
