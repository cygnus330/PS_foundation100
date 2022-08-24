a = input()
if(ord(a) <= ord("9")):
    a = int(a)
else:
    a = ord(a) - ord('A') + 10

for i in range (1, 16):
    print("%X*%X=%X" %(a, i, a*i))
