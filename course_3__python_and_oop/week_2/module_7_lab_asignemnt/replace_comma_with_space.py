def replace_comma_with_space(text):
    out = ""
    for letter in text:
        if (letter == ','):
            letter = " "
        out += letter
    return out


s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
