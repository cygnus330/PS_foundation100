n = int(input())
a = []
b = input().split()
for i in range(24):
    a.append(0)

for i in range(n):
    a[int(b[i])] += 1

for i in range(1, 24):
    print(a[i], end=" ")
