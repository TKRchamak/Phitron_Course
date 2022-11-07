s = 'Programming Hero is the best'

T_list = s.split()
R_List = []

for word in T_list:
    lst = []
    for l in word:
        lst.append(l)

    lst.reverse()
    R_List.append("".join(lst))


s = " ".join(R_List)
print(s)
