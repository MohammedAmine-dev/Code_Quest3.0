t = int(input())

for _ in  range(t):
    n = int(input())
    s=0
    while n!=0:
        b = bin(n)
        b = b[2:]
        sup = "1" + "0"*len(b)
        inf = "1" + "0"*(len(b)-1)

        supint = int(sup, 2)
        infint = int(inf, 2)
        d1 = supint - n
        d2 = n - infint
        n = min(d1,d2)
        s+=1
    
    print(s)
    