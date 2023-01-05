def anagrams(lst):
    temp_dict = {}
    ans = []

    for item in lst:
        copy = ''.join(sorted(item))
        if copy in temp_dict:
            temp_dict[copy].append(item)
        else:
            temp_dict[copy] = []
            temp_dict[copy].append(item)

    for key in temp_dict.keys():
        ans.append(temp_dict[key])
    return ans


temp_dict = anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node'])
print(temp_dict)
