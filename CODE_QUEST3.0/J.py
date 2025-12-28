n = int(input())
x = [0] * n
y = [0] * n
r2 = 0
for i in range(n):
    x[i], y[i] = map(int,input().split())
    r2 = max(r2, x[i]**2 + y[i]**2)

print(r2)