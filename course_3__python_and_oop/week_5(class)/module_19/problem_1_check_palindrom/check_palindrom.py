def check_palindrome(str):
    # r_str = "".join(reversed(str))
    r_str = str[:: -1]
    if str == r_str:
        print('It is palindrome')
        return True
    print('It is not palindrome')
    return False


if __name__ == "__main__":
    check_palindrome('abba')
