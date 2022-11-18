import string


replace_with = ["chief", "thief", "superintendent",
                "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


def replace_word(s):
    word_list = s.split(' ')
    output = ""

    for i, r_word in enumerate(replace_with):
        if i % 2 == 0:
            if r_word in word_list:
                word_list[word_list.index(r_word)] = replace_with[i+1]

    for i, word in enumerate(word_list):
        if (i == len(word_list)-1):
            output += word
        else:
            output += word+" "
    return output


print(replace_word(s))
