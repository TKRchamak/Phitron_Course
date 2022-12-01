def nearly_equal(str1, str2):
    for l in str1:
        if l in str2:
            pass
        else:
            return False
    return True


if __name__ == "__main__":
    print(nearly_equal("tomb", "tonmoy"))
