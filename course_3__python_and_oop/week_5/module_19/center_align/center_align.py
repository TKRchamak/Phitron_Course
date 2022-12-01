def center_align(str, len):
    print(format(str, f'^{len}'))


if __name__ == '__main__':
    line_len = 0

    with open('text.txt', 'r') as f:
        lines = f.readlines()
        for line in lines:
            if len(line) > line_len:
                line_len = len(line)
            line_len += 20

        for line in lines:
            center_align(line, line_len)
