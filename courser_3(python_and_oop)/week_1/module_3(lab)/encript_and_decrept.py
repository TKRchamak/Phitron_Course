test = "tonmoy"
shift = 5
output = ''

for char in test:
    # print(char)
    ddf = (ord(char)+shift-97) % 26+97
    output += chr(ddf)

print(output)
