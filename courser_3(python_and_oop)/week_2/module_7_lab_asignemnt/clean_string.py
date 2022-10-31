def clean_string(text):
    output = ""
    for letter in text:
        if (letter.lower() >= 'a' and letter.lower() <= 'z'):
            output += letter

    return output


s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)
