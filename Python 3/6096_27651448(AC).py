﻿#import numpy as np

arr = []
for i in range(19) :
  arr.append([])
  for j in range(19) :
    arr[i].append(0)
  arr[i] = list(map(int, input().split()))
  #arr[i] = np.array(arr[i])

n = int(input())
for i in range(n) :
  x, y = map(int, input().split())
  for j in range(19) :
    if(arr[x-1][j] == 0) :
      arr[x-1][j] = 1
    else :
      arr[x-1][j] = 0
    if(arr[j][y-1] == 0) :
      arr[j][y-1] = 1
    else :
      arr[j][y-1] = 0

for i in range(19) :
  for j in range(19) :
    print(arr[i][j], end = " ")
  print()

