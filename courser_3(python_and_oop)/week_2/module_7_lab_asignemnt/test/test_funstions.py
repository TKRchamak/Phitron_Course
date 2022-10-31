def make_upper(str):
    return str.upper()


def make_capital(str):
    return str.capitalize()


def make_lower(str):
    return str.lower()


# print(make_lower('TONMOY'))


def test_script():
    l_str = "tonmoy"
    c_str = "Tonmoy"
    u_str = "TONMOY"
    if (make_upper(l_str) == u_str):
        if (make_capital(l_str) == c_str):
            if (make_lower(u_str) == l_str):
                assert make_lower(u_str) == l_str
            else:
                assert make_lower(u_str) == l_str
        else:
            assert make_capital(l_str) == c_str
    else:
        assert make_upper(l_str) == u_str
