st = 'x3b4U5i2'
dec = {}
i = 0
res = ""

while i < len(st):
    dec[st[i]] = st[i+1]
    i += 2

sot_dec = sorted(dec.items(), key=lambda x: x[1])
dec = dict(sot_dec)

for k, v in dec.items():
    j = int(v)
    while (j >= 0):
        res += k
        j -= 1

print(res)
