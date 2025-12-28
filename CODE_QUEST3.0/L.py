n,m = map(int, input().split())

matrices = [[0]*m for _ in range(n)]

impairs = []
pairs = []
result = [pairs, impairs]

a = list(map(int, input().split()))
for i in range(n*m):
    if a[i] % 2 == 0:
        pairs.append(a[i])
        
    else:
        impairs.append(a[i])
        
if (abs(len(impairs) - len(pairs))) > 1:
    print('No')
else:
    print("Yes")
    begin = 0
    if len(impairs) > len(pairs):
        begin = 1
    else: 
        begin = 0
    
    for i in range(n):
        begin2 = begin
        for j in range(m):
            matrices[i][j] = result[begin2].pop()
            if begin2 == 1:
                begin2 = 0
            elif begin2 == 0:
                begin2 = 1
        if begin == 1:
            begin = 0
        elif begin == 0:
            begin = 1

    for i in range(n):
        for j in range(m):
            print(matrices[i][j], end=' ')
        print()