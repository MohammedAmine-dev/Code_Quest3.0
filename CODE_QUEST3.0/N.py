from math import ceil, sqrt
def prime(n):
    if (n < 2):
        return False
    for i in range(2, ceil(sqrt(n))):
        if (n%i == 0):
            return False
    
    return True

n= int(input())
if n == 1:
    print("YES")
elif prime(n):
    print("YES")
else:
    print("NO")