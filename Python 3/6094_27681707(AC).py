n = int(input())
a = input().split()
b = int(a[0])

for i in range(n):
    a[i] = int(a[i])
    if(b > a[i]):
        b = a[i]

print(b)
