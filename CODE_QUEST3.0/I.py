from math import lcm

t = int(input())
for _ in range(t):
    x = int(input())
    s = 0
    for i in range(1, 1+10**18):
        if (int(str(i)+str(x)) % lcm(x,i)) == 0:
            s += 1
    print(s)