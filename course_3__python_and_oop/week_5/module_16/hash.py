import hashlib

password = 'fkgliusg'
en_pass = password.encode()
hash_pass = hashlib.md5(en_pass).hexdigest()

print(hash_pass)
