"""
a, b, c = map(int, input().split())
print("%.2f MB" %(float(a * b * c / (8 * 1024 *1024))))
"""

d = list(list(map(int,input().split())) for i in range(10))
A = []
for i in range(12):
    A.append([])
    for j in range(12):
        A[i].append(0)
for i in range(1, 11):
    for j in range(1, 11):
        A[i][j] = d[i-1][j-1]
x = 2
y = 2

while(not((A[x][y] == 2) or (A[x+1][y] == 1 and A[x][y+1] == 1))):
    A[x][y] = 9
    if(A[x][y+1] == 1):
        x += 1
    else:
        y += 1
A[x][y] = 9

for i in range (1, 11):
    for j in range (1, 11):
        print(A[i][j], end = " ")
    print()
