a = ['oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."


def create_new_string(a, s):
    s = s.replace(",", "")

    s_list = s.split(" ")
    output = ""

    for word in a:
        for index, s_word in enumerate(s_list):
            if (word.lower() == s_word.lower()):
                if index < len(s_list):
                    if (output == ""):
                        output += s_list[index+1]
                    else:
                        output += " " + s_list[index+1]

    with open('out.txt', 'wt') as textFile:
        # print(output)
        textFile.write(output)
        textFile.close()


create_new_string(a, s)
